# APB Timer

## Overview

This project implements a programmable timer peripheral with an AMBA APB (Advanced Peripheral Bus) interface.

The APB interface allows a processor or bus master to configure and control the timer through memory-mapped registers.

## Features

- AMBA APB interface
- Programmable timer
- Timer control and status registers
- Synchronous counter
- Start, stop and reset functionality
- Synthesizable RTL
- SystemVerilog testbench
- Functional verification

## Architecture

APB Bus
   |
   v
APB Interface
   |
   v
Register Logic
   |
   v
Timer Control
   |
   v
Timer Counter
   |
   v
Timeout

## APB Interface Signals

| Signal | Description |
|--------|-------------|
| PCLK | APB clock |
| PRESETn | Active-low reset |
| PSEL | Peripheral select |
| PENABLE | APB enable signal |
| PWRITE | Read/write control |
| PADDR | Address |
| PWDATA | Write data |
| PRDATA | Read data |
| PREADY | Transfer completion |
| PSLVERR | Error indication |

## Working

The timer operates as a programmable counter.

1. A timer value is written through the APB interface.
2. The timer value is loaded into the counter.
3. The timer is enabled and started.
4. The counter decrements on every clock cycle.
5. When the counter reaches zero, a timeout condition is generated.
6. The timer status can be read through the APB interface.

## APB Transaction

### Write Transaction

The APB write transaction consists of:

- Setup phase
- Access phase
- Address and write data transfer
- Register update

### Read Transaction

The APB read transaction consists of:

- Setup phase
- Access phase
- Register address decoding
- Read data returned through PRDATA

## Verification

The design is verified using a SystemVerilog testbench.

Verification includes:

- Reset verification
- APB write transactions
- APB read transactions
- Timer configuration
- Timer start
- Counter operation
- Timeout generation
- Register readback

## Project Structure

```text
apb_timer/
├── rtl/
├── tb/
└── README.md
