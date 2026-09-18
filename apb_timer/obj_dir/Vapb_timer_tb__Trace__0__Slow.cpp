// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_timer_tb__Syms.h"


VL_ATTR_COLD void Vapb_timer_tb___024root__trace_init_sub__TOP__0(Vapb_timer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("apb_timer_tb ");
    tracep->declBit(c+11,"PCLK", false,-1);
    tracep->declBit(c+1,"PRESETn", false,-1);
    tracep->declBit(c+2,"PSEL", false,-1);
    tracep->declBit(c+3,"PENABLE", false,-1);
    tracep->declBit(c+4,"PWRITE", false,-1);
    tracep->declBus(c+5,"PADDR", false,-1, 7,0);
    tracep->declBus(c+6,"PWDATA", false,-1, 31,0);
    tracep->declBus(c+12,"PRDATA", false,-1, 31,0);
    tracep->declBit(c+7,"timer_done", false,-1);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+15,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"PCLK", false,-1);
    tracep->declBit(c+1,"PRESETn", false,-1);
    tracep->declBit(c+2,"PSEL", false,-1);
    tracep->declBit(c+3,"PENABLE", false,-1);
    tracep->declBit(c+4,"PWRITE", false,-1);
    tracep->declBus(c+5,"PADDR", false,-1, 7,0);
    tracep->declBus(c+6,"PWDATA", false,-1, 31,0);
    tracep->declBus(c+12,"PRDATA", false,-1, 31,0);
    tracep->declBit(c+7,"timer_done", false,-1);
    tracep->declBus(c+16,"ADDR_LOAD", false,-1, 7,0);
    tracep->declBus(c+17,"ADDR_CONTROL", false,-1, 7,0);
    tracep->declBus(c+18,"ADDR_STATUS", false,-1, 7,0);
    tracep->declBus(c+19,"ADDR_COUNT", false,-1, 7,0);
    tracep->declBus(c+8,"load_val", false,-1, 7,0);
    tracep->declBus(c+9,"count", false,-1, 7,0);
    tracep->declBit(c+10,"running", false,-1);
    tracep->declBit(c+13,"apb_write", false,-1);
    tracep->declBit(c+14,"apb_read", false,-1);
    tracep->declBus(c+6,"unused_PWDATA", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vapb_timer_tb___024root__trace_init_top(Vapb_timer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_init_top\n"); );
    // Body
    Vapb_timer_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vapb_timer_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_timer_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vapb_timer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vapb_timer_tb___024root__trace_register(Vapb_timer_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vapb_timer_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vapb_timer_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vapb_timer_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vapb_timer_tb___024root__trace_full_sub_0(Vapb_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vapb_timer_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_full_top_0\n"); );
    // Init
    Vapb_timer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_timer_tb___024root*>(voidSelf);
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vapb_timer_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vapb_timer_tb___024root__trace_full_sub_0(Vapb_timer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_timer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_timer_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->apb_timer_tb__DOT__PRESETn));
    bufp->fullBit(oldp+2,(vlSelf->apb_timer_tb__DOT__PSEL));
    bufp->fullBit(oldp+3,(vlSelf->apb_timer_tb__DOT__PENABLE));
    bufp->fullBit(oldp+4,(vlSelf->apb_timer_tb__DOT__PWRITE));
    bufp->fullCData(oldp+5,(vlSelf->apb_timer_tb__DOT__PADDR),8);
    bufp->fullIData(oldp+6,(vlSelf->apb_timer_tb__DOT__PWDATA),32);
    bufp->fullBit(oldp+7,(vlSelf->apb_timer_tb__DOT__timer_done));
    bufp->fullCData(oldp+8,(vlSelf->apb_timer_tb__DOT__uut__DOT__load_val),8);
    bufp->fullCData(oldp+9,(vlSelf->apb_timer_tb__DOT__uut__DOT__count),8);
    bufp->fullBit(oldp+10,(vlSelf->apb_timer_tb__DOT__uut__DOT__running));
    bufp->fullBit(oldp+11,(vlSelf->apb_timer_tb__DOT__PCLK));
    bufp->fullIData(oldp+12,(vlSelf->apb_timer_tb__DOT__PRDATA),32);
    bufp->fullBit(oldp+13,(vlSelf->apb_timer_tb__DOT__uut__DOT__apb_write));
    bufp->fullBit(oldp+14,(((~ (IData)(vlSelf->apb_timer_tb__DOT__PWRITE)) 
                            & (IData)(vlSelf->apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0))));
    bufp->fullIData(oldp+15,(8U),32);
    bufp->fullCData(oldp+16,(0U),8);
    bufp->fullCData(oldp+17,(4U),8);
    bufp->fullCData(oldp+18,(8U),8);
    bufp->fullCData(oldp+19,(0xcU),8);
}
