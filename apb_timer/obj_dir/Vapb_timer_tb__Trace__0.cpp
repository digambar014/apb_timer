// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_timer_tb__Syms.h"


void Vapb_timer_tb___024root__trace_chg_sub_0(Vapb_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapb_timer_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vapb_timer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_timer_tb___024root*>(voidSelf);
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapb_timer_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vapb_timer_tb___024root__trace_chg_sub_0(Vapb_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->apb_timer_tb__DOT__PRESETn));
        bufp->chgBit(oldp+1,(vlSelf->apb_timer_tb__DOT__PSEL));
        bufp->chgBit(oldp+2,(vlSelf->apb_timer_tb__DOT__PENABLE));
        bufp->chgBit(oldp+3,(vlSelf->apb_timer_tb__DOT__PWRITE));
        bufp->chgCData(oldp+4,(vlSelf->apb_timer_tb__DOT__PADDR),8);
        bufp->chgIData(oldp+5,(vlSelf->apb_timer_tb__DOT__PWDATA),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+6,(vlSelf->apb_timer_tb__DOT__timer_done));
        bufp->chgCData(oldp+7,(vlSelf->apb_timer_tb__DOT__uut__DOT__load_val),8);
        bufp->chgCData(oldp+8,(vlSelf->apb_timer_tb__DOT__uut__DOT__count),8);
        bufp->chgBit(oldp+9,(vlSelf->apb_timer_tb__DOT__uut__DOT__running));
    }
    bufp->chgBit(oldp+10,(vlSelf->apb_timer_tb__DOT__PCLK));
    bufp->chgIData(oldp+11,(vlSelf->apb_timer_tb__DOT__PRDATA),32);
    bufp->chgBit(oldp+12,(vlSelf->apb_timer_tb__DOT__uut__DOT__apb_write));
    bufp->chgBit(oldp+13,(((~ (IData)(vlSelf->apb_timer_tb__DOT__PWRITE)) 
                           & (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0))));
}

void Vapb_timer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_cleanup\n"); );
    // Init
    Vapb_timer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_timer_tb___024root*>(voidSelf);
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
