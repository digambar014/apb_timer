// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_timer_tb__Syms.h"
#include "Vapb_timer_tb___024root.h"

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_static__TOP(Vapb_timer_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_static(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_static\n"); );
    // Body
    Vapb_timer_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_static__TOP(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->apb_timer_tb__DOT__PRESETn = 0U;
    vlSelf->apb_timer_tb__DOT__PSEL = 0U;
    vlSelf->apb_timer_tb__DOT__PENABLE = 0U;
    vlSelf->apb_timer_tb__DOT__PWRITE = 0U;
    vlSelf->apb_timer_tb__DOT__PADDR = 0U;
    vlSelf->apb_timer_tb__DOT__PWDATA = 0U;
}

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_initial__TOP(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->apb_timer_tb__DOT__PCLK = 0U;
}

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_final(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_triggers__stl(Vapb_timer_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__stl(Vapb_timer_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___eval_stl(Vapb_timer_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_settle(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vapb_timer_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vapb_timer_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("apb_timer_tb.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vapb_timer_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__stl(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vapb_timer_tb___024root___act_comb__TOP__0(Vapb_timer_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_timer_tb___024root___eval_stl(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vapb_timer_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__act(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge apb_timer_tb.timer_done)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge apb_timer_tb.PCLK or negedge apb_timer_tb.PRESETn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge apb_timer_tb.PCLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_timer_tb___024root___dump_triggers__nba(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge apb_timer_tb.timer_done)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge apb_timer_tb.PCLK or negedge apb_timer_tb.PRESETn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge apb_timer_tb.PCLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vapb_timer_tb___024root___ctor_var_reset(Vapb_timer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->apb_timer_tb__DOT__PCLK = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__PRESETn = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__PSEL = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__PENABLE = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__PWRITE = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__PADDR = VL_RAND_RESET_I(8);
    vlSelf->apb_timer_tb__DOT__PWDATA = VL_RAND_RESET_I(32);
    vlSelf->apb_timer_tb__DOT__PRDATA = VL_RAND_RESET_I(32);
    vlSelf->apb_timer_tb__DOT__timer_done = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__uut__DOT__load_val = VL_RAND_RESET_I(8);
    vlSelf->apb_timer_tb__DOT__uut__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->apb_timer_tb__DOT__uut__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__uut__DOT__apb_write = VL_RAND_RESET_I(1);
    vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0 = 0;
    vlSelf->__Vdlyvval__apb_timer_tb__DOT__PCLK__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__apb_timer_tb__DOT__PCLK__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__timer_done__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PCLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__apb_timer_tb__DOT__PRESETn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
