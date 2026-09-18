`timescale 1ns/1ps

module apb_timer #(
    parameter WIDTH = 8
)(
    input wire             PCLK,
    input wire             PRESETn,

    input wire             PSEL,
    input wire             PENABLE,
    input wire             PWRITE,
    input wire [7:0]       PADDR,
    input wire [31:0]      PWDATA,

    output reg [31:0]      PRDATA,
    output reg             timer_done
);

    // Register addresses
    localparam ADDR_LOAD    = 8'h00;
    localparam ADDR_CONTROL = 8'h04;
    localparam ADDR_STATUS  = 8'h08;
    localparam ADDR_COUNT   = 8'h0C;

    // Internal registers
    reg [WIDTH-1:0] load_val;
    reg [WIDTH-1:0] count;
    reg             running;

    // APB transfer detection
    wire apb_write;
    wire apb_read;

    assign apb_write = PSEL && PENABLE && PWRITE;
    assign apb_read  = PSEL && PENABLE && !PWRITE;

    // Timer and APB write logic
    always @(posedge PCLK or negedge PRESETn) begin

        if (!PRESETn) begin
            load_val   <= {WIDTH{1'b0}};
            count      <= {WIDTH{1'b0}};
            running    <= 1'b0;
            timer_done <= 1'b0;
        end

        else begin

            // APB write
            if (apb_write) begin

                case (PADDR)

                    // LOAD register
                    ADDR_LOAD: begin
                        load_val <= PWDATA[WIDTH-1:0];
                    end

                    // CONTROL register
                    // bit 0 = 1: Start
                    // bit 0 = 0: Stop
                    ADDR_CONTROL: begin

                        if (PWDATA[0]) begin
                            running    <= 1'b1;
                            count      <= load_val;
                            timer_done <= 1'b0;
                        end

                        else begin
                            running    <= 1'b0;
                            timer_done <= 1'b0;
                        end

                    end

                    default: begin
                    end

                endcase
            end

            // Timer countdown
            else if (running) begin

                if (count > 1) begin
                    count      <= count - 1'b1;
                    timer_done <= 1'b0;
                end

                else begin
                    count      <= {WIDTH{1'b0}};
                    running    <= 1'b0;
                    timer_done <= 1'b1;
                end

            end

            else begin
                timer_done <= 1'b0;
            end

        end
    end

    // APB read logic
    always @(*) begin

        PRDATA = 32'h00000000;

        if (apb_read) begin

            case (PADDR)

                // LOAD register
                ADDR_LOAD:
                    PRDATA = {{(32-WIDTH){1'b0}}, load_val};

                // CONTROL register
                ADDR_CONTROL:
                    PRDATA = {31'b0, running};

                // STATUS register
                ADDR_STATUS:
                    PRDATA = {31'b0, timer_done};

                // COUNT register
                ADDR_COUNT:
                    PRDATA = {{(32-WIDTH){1'b0}}, count};

                default:
                    PRDATA = 32'h00000000;

            endcase

        end
    end

    // Explicitly mark upper PWDATA bits as intentionally unused
    // when WIDTH = 8.
    wire [31:0] unused_PWDATA = PWDATA;

endmodule

