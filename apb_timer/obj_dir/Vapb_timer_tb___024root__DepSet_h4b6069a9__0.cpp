// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_timer_tb__Syms.h"
#include "Vapb_timer_tb___024root.h"

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_initial__TOP(Vapb_timer_tb___024root* vlSelf);
VlCoroutine Vapb_timer_tb___024root___eval_initial__TOP__0(Vapb_timer_tb___024root* vlSelf);
VlCoroutine Vapb_timer_tb___024root___eval_initial__TOP__1(Vapb_timer_tb___024root* vlSelf);

void Vapb_timer_tb___024root___eval_initial(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_initial\n"); );
    // Body
    Vapb_timer_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vapb_timer_tb___024root___eval_initial__TOP__0(vlSelf);
    Vapb_timer_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__timer_done__0 
        = vlSelf->apb_timer_tb__DOT__timer_done;
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PCLK__0 
        = vlSelf->apb_timer_tb__DOT__PCLK;
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PRESETn__0 
        = vlSelf->apb_timer_tb__DOT__PRESETn;
}

VL_INLINE_OPT VlCoroutine Vapb_timer_tb___024root___eval_initial__TOP__1(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "apb_timer_tb.v", 
                                           32);
        vlSelf->__Vdlyvval__apb_timer_tb__DOT__PCLK__v0 
            = (1U & (~ (IData)(vlSelf->apb_timer_tb__DOT__PCLK)));
        vlSelf->__Vdlyvset__apb_timer_tb__DOT__PCLK__v0 = 1U;
    }
}

VL_INLINE_OPT void Vapb_timer_tb___024root___act_comb__TOP__0(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0 
        = ((IData)(vlSelf->apb_timer_tb__DOT__PENABLE) 
           & (IData)(vlSelf->apb_timer_tb__DOT__PSEL));
    vlSelf->apb_timer_tb__DOT__uut__DOT__apb_write 
        = ((IData)(vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0) 
           & (IData)(vlSelf->apb_timer_tb__DOT__PWRITE));
    vlSelf->apb_timer_tb__DOT__PRDATA = 0U;
    if (((~ (IData)(vlSelf->apb_timer_tb__DOT__PWRITE)) 
         & (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0))) {
        vlSelf->apb_timer_tb__DOT__PRDATA = ((0U == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                              ? (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__load_val)
                                              : ((4U 
                                                  == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                                  ? (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__running)
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                                   ? (IData)(vlSelf->apb_timer_tb__DOT__timer_done)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                                    ? (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__count)
                                                    : 0U))));
    }
}

void Vapb_timer_tb___024root___eval_act(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_act\n"); );
    // Body
    if ((0xcULL & vlSelf->__VactTriggered.word(0U))) {
        Vapb_timer_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vapb_timer_tb___024root___nba_sequent__TOP__0(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_WRITEF("Time=%0t : TIMER DONE\n",64,VL_TIME_UNITED_Q(1000),
              -9);
}

VL_INLINE_OPT void Vapb_timer_tb___024root___nba_sequent__TOP__1(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__apb_timer_tb__DOT__uut__DOT__running;
    __Vdly__apb_timer_tb__DOT__uut__DOT__running = 0;
    CData/*7:0*/ __Vdly__apb_timer_tb__DOT__uut__DOT__count;
    __Vdly__apb_timer_tb__DOT__uut__DOT__count = 0;
    // Body
    __Vdly__apb_timer_tb__DOT__uut__DOT__count = vlSelf->apb_timer_tb__DOT__uut__DOT__count;
    __Vdly__apb_timer_tb__DOT__uut__DOT__running = vlSelf->apb_timer_tb__DOT__uut__DOT__running;
    if (vlSelf->apb_timer_tb__DOT__PRESETn) {
        if (vlSelf->apb_timer_tb__DOT__uut__DOT__apb_write) {
            if ((0U != (IData)(vlSelf->apb_timer_tb__DOT__PADDR))) {
                if ((4U == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))) {
                    if ((1U & vlSelf->apb_timer_tb__DOT__PWDATA)) {
                        __Vdly__apb_timer_tb__DOT__uut__DOT__running = 1U;
                        __Vdly__apb_timer_tb__DOT__uut__DOT__count 
                            = vlSelf->apb_timer_tb__DOT__uut__DOT__load_val;
                        vlSelf->apb_timer_tb__DOT__timer_done = 0U;
                    } else {
                        __Vdly__apb_timer_tb__DOT__uut__DOT__running = 0U;
                        vlSelf->apb_timer_tb__DOT__timer_done = 0U;
                    }
                }
            }
            if ((0U == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))) {
                vlSelf->apb_timer_tb__DOT__uut__DOT__load_val 
                    = (0xffU & vlSelf->apb_timer_tb__DOT__PWDATA);
            }
        } else if (vlSelf->apb_timer_tb__DOT__uut__DOT__running) {
            if ((1U < (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__count))) {
                __Vdly__apb_timer_tb__DOT__uut__DOT__count 
                    = (0xffU & ((IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__count) 
                                - (IData)(1U)));
                vlSelf->apb_timer_tb__DOT__timer_done = 0U;
            } else {
                __Vdly__apb_timer_tb__DOT__uut__DOT__count = 0U;
                __Vdly__apb_timer_tb__DOT__uut__DOT__running = 0U;
                vlSelf->apb_timer_tb__DOT__timer_done = 1U;
            }
        } else {
            vlSelf->apb_timer_tb__DOT__timer_done = 0U;
        }
    } else {
        __Vdly__apb_timer_tb__DOT__uut__DOT__count = 0U;
        __Vdly__apb_timer_tb__DOT__uut__DOT__running = 0U;
        vlSelf->apb_timer_tb__DOT__timer_done = 0U;
        vlSelf->apb_timer_tb__DOT__uut__DOT__load_val = 0U;
    }
    vlSelf->apb_timer_tb__DOT__uut__DOT__running = __Vdly__apb_timer_tb__DOT__uut__DOT__running;
    vlSelf->apb_timer_tb__DOT__uut__DOT__count = __Vdly__apb_timer_tb__DOT__uut__DOT__count;
}

VL_INLINE_OPT void Vapb_timer_tb___024root___nba_sequent__TOP__2(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__apb_timer_tb__DOT__PCLK__v0) {
        vlSelf->apb_timer_tb__DOT__PCLK = vlSelf->__Vdlyvval__apb_timer_tb__DOT__PCLK__v0;
        vlSelf->__Vdlyvset__apb_timer_tb__DOT__PCLK__v0 = 0U;
    }
}

VL_INLINE_OPT void Vapb_timer_tb___024root___nba_comb__TOP__0(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0 
        = ((IData)(vlSelf->apb_timer_tb__DOT__PENABLE) 
           & (IData)(vlSelf->apb_timer_tb__DOT__PSEL));
    vlSelf->apb_timer_tb__DOT__uut__DOT__apb_write 
        = ((IData)(vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0) 
           & (IData)(vlSelf->apb_timer_tb__DOT__PWRITE));
}

VL_INLINE_OPT void Vapb_timer_tb___024root___nba_comb__TOP__1(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->apb_timer_tb__DOT__PRDATA = 0U;
    if (((~ (IData)(vlSelf->apb_timer_tb__DOT__PWRITE)) 
         & (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0))) {
        vlSelf->apb_timer_tb__DOT__PRDATA = ((0U == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                              ? (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__load_val)
                                              : ((4U 
                                                  == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                                  ? (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__running)
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                                   ? (IData)(vlSelf->apb_timer_tb__DOT__timer_done)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->apb_timer_tb__DOT__PADDR))
                                                    ? (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT__count)
                                                    : 0U))));
    }
}

void Vapb_timer_tb___024root___eval_nba(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_timer_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_timer_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_timer_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_timer_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapb_timer_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vapb_timer_tb___024root___eval_triggers__act(Vapb_timer_tb___024root* vlSelf);
void Vapb_timer_tb___024root___timing_commit(Vapb_timer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__act(Vapb_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb_timer_tb___024root___timing_resume(Vapb_timer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__nba(Vapb_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapb_timer_tb___024root___eval(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vapb_timer_tb___024root___eval_triggers__act(vlSelf);
            Vapb_timer_tb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vapb_timer_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("apb_timer_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vapb_timer_tb___024root___timing_resume(vlSelf);
                Vapb_timer_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vapb_timer_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("apb_timer_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vapb_timer_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vapb_timer_tb___024root___timing_commit(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h894fb888__0.commit("@(posedge apb_timer_tb.PCLK)");
    }
}

void Vapb_timer_tb___024root___timing_resume(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h894fb888__0.resume("@(posedge apb_timer_tb.PCLK)");
    }
}

#ifdef VL_DEBUG
void Vapb_timer_tb___024root___eval_debug_assertions(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
