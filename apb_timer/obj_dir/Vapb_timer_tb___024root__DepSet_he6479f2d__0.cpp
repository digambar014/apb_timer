// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_timer_tb__Syms.h"
#include "Vapb_timer_tb__Syms.h"
#include "Vapb_timer_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vapb_timer_tb___024root___eval_initial__TOP__0(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_apb_timer_tb__DOT__apb_write__0__addr;
    __Vtask_apb_timer_tb__DOT__apb_write__0__addr = 0;
    IData/*31:0*/ __Vtask_apb_timer_tb__DOT__apb_write__0__data;
    __Vtask_apb_timer_tb__DOT__apb_write__0__data = 0;
    CData/*7:0*/ __Vtask_apb_timer_tb__DOT__apb_write__1__addr;
    __Vtask_apb_timer_tb__DOT__apb_write__1__addr = 0;
    IData/*31:0*/ __Vtask_apb_timer_tb__DOT__apb_write__1__data;
    __Vtask_apb_timer_tb__DOT__apb_write__1__data = 0;
    CData/*7:0*/ __Vtask_apb_timer_tb__DOT__apb_read__2__addr;
    __Vtask_apb_timer_tb__DOT__apb_read__2__addr = 0;
    CData/*7:0*/ __Vtask_apb_timer_tb__DOT__apb_write__3__addr;
    __Vtask_apb_timer_tb__DOT__apb_write__3__addr = 0;
    IData/*31:0*/ __Vtask_apb_timer_tb__DOT__apb_write__3__data;
    __Vtask_apb_timer_tb__DOT__apb_write__3__data = 0;
    CData/*7:0*/ __Vtask_apb_timer_tb__DOT__apb_write__4__addr;
    __Vtask_apb_timer_tb__DOT__apb_write__4__addr = 0;
    IData/*31:0*/ __Vtask_apb_timer_tb__DOT__apb_write__4__data;
    __Vtask_apb_timer_tb__DOT__apb_write__4__data = 0;
    CData/*7:0*/ __Vtask_apb_timer_tb__DOT__apb_read__5__addr;
    __Vtask_apb_timer_tb__DOT__apb_read__5__addr = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696d6572U;
    __Vtemp_1[2U] = 0x70625f74U;
    __Vtemp_1[3U] = 0x61U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "apb_timer_tb.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PRESETn = 1U;
    __Vtask_apb_timer_tb__DOT__apb_write__0__data = 5U;
    __Vtask_apb_timer_tb__DOT__apb_write__0__addr = 0U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 1U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = __Vtask_apb_timer_tb__DOT__apb_write__0__addr;
    vlSelf->apb_timer_tb__DOT__PWDATA = __Vtask_apb_timer_tb__DOT__apb_write__0__data;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    __Vtask_apb_timer_tb__DOT__apb_write__1__data = 1U;
    __Vtask_apb_timer_tb__DOT__apb_write__1__addr = 4U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 1U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = __Vtask_apb_timer_tb__DOT__apb_write__1__addr;
    vlSelf->apb_timer_tb__DOT__PWDATA = __Vtask_apb_timer_tb__DOT__apb_write__1__data;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    co_await vlSelf->__VdlySched.delay(0x13880ULL, 
                                       nullptr, "apb_timer_tb.v", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_timer_tb__DOT__apb_read__2__addr = 8U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 1U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = __Vtask_apb_timer_tb__DOT__apb_read__2__addr;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Time=%0t : Read [0x%0x] = %0#\n",64,
              VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_apb_timer_tb__DOT__apb_read__2__addr),
              32,vlSelf->apb_timer_tb__DOT__PRDATA);
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    __Vtask_apb_timer_tb__DOT__apb_write__3__data = 3U;
    __Vtask_apb_timer_tb__DOT__apb_write__3__addr = 0U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 1U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = __Vtask_apb_timer_tb__DOT__apb_write__3__addr;
    vlSelf->apb_timer_tb__DOT__PWDATA = __Vtask_apb_timer_tb__DOT__apb_write__3__data;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    __Vtask_apb_timer_tb__DOT__apb_write__4__data = 1U;
    __Vtask_apb_timer_tb__DOT__apb_write__4__addr = 4U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 1U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = __Vtask_apb_timer_tb__DOT__apb_write__4__addr;
    vlSelf->apb_timer_tb__DOT__PWDATA = __Vtask_apb_timer_tb__DOT__apb_write__4__data;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "apb_timer_tb.v", 
                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_apb_timer_tb__DOT__apb_read__5__addr = 8U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PSEL = 1U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = __Vtask_apb_timer_tb__DOT__apb_read__5__addr;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 1U;
    co_await vlSelf->__VtrigSched_h894fb888__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge apb_timer_tb.PCLK)", 
                                                       "apb_timer_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("Time=%0t : Read [0x%0x] = %0#\n",64,
              VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_apb_timer_tb__DOT__apb_read__5__addr),
              32,vlSelf->apb_timer_tb__DOT__PRDATA);
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "apb_timer_tb.v", 
                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("apb_timer_tb.v", 117, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__act(Vapb_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_timer_tb___024root___eval_triggers__act(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->apb_timer_tb__DOT__timer_done) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__timer_done__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->apb_timer_tb__DOT__PCLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PCLK__0))) 
                                     | ((~ (IData)(vlSelf->apb_timer_tb__DOT__PRESETn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PRESETn__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->apb_timer_tb__DOT__PCLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PCLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__timer_done__0 
        = vlSelf->apb_timer_tb__DOT__timer_done;
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PCLK__0 
        = vlSelf->apb_timer_tb__DOT__PCLK;
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PRESETn__0 
        = vlSelf->apb_timer_tb__DOT__PRESETn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vapb_timer_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
