// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_timer_tb.h for the primary calling header

#ifndef VERILATED_VAPB_TIMER_TB___024ROOT_H_
#define VERILATED_VAPB_TIMER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapb_timer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_timer_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ apb_timer_tb__DOT__PCLK;
    CData/*0:0*/ apb_timer_tb__DOT__PRESETn;
    CData/*0:0*/ apb_timer_tb__DOT__timer_done;
    CData/*0:0*/ apb_timer_tb__DOT__PSEL;
    CData/*0:0*/ apb_timer_tb__DOT__PENABLE;
    CData/*0:0*/ apb_timer_tb__DOT__PWRITE;
    CData/*7:0*/ apb_timer_tb__DOT__PADDR;
    CData/*7:0*/ apb_timer_tb__DOT__uut__DOT__load_val;
    CData/*7:0*/ apb_timer_tb__DOT__uut__DOT__count;
    CData/*0:0*/ apb_timer_tb__DOT__uut__DOT__running;
    CData/*0:0*/ apb_timer_tb__DOT__uut__DOT__apb_write;
    CData/*0:0*/ apb_timer_tb__DOT__uut__DOT____VdfgTmp_hf971dbb1__0;
    CData/*0:0*/ __Vdlyvval__apb_timer_tb__DOT__PCLK__v0;
    CData/*0:0*/ __Vdlyvset__apb_timer_tb__DOT__PCLK__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_timer_tb__DOT__timer_done__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_timer_tb__DOT__PCLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_timer_tb__DOT__PRESETn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ apb_timer_tb__DOT__PWDATA;
    IData/*31:0*/ apb_timer_tb__DOT__PRDATA;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h894fb888__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapb_timer_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_timer_tb___024root(Vapb_timer_tb__Syms* symsp, const char* v__name);
    ~Vapb_timer_tb___024root();
    VL_UNCOPYABLE(Vapb_timer_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
