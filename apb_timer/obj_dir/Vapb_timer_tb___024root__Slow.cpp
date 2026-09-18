// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_timer_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_timer_tb__Syms.h"
#include "Vapb_timer_tb__Syms.h"
#include "Vapb_timer_tb___024root.h"

void Vapb_timer_tb___024root___ctor_var_reset(Vapb_timer_tb___024root* vlSelf);

Vapb_timer_tb___024root::Vapb_timer_tb___024root(Vapb_timer_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_timer_tb___024root___ctor_var_reset(this);
}

void Vapb_timer_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vapb_timer_tb___024root::~Vapb_timer_tb___024root() {
}
