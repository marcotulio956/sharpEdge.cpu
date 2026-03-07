// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vthread_scheduler_tb.h for the primary calling header

#ifndef VERILATED_VTHREAD_SCHEDULER_TB___024ROOT_H_
#define VERILATED_VTHREAD_SCHEDULER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vthread_scheduler_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vthread_scheduler_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ thread_scheduler_tb__DOT__clk;
    CData/*0:0*/ thread_scheduler_tb__DOT__rst;
    CData/*0:0*/ thread_scheduler_tb__DOT__interleaving;
    CData/*0:0*/ __Vdly__thread_scheduler_tb__DOT__interleaving;
    CData/*0:0*/ __Vtrigprevexpr___TOP__thread_scheduler_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hde98c31c__0;
    VlTriggerScheduler __VtrigSched_hde98c3ee__0;

    // INTERNAL VARIABLES
    Vthread_scheduler_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vthread_scheduler_tb___024root(Vthread_scheduler_tb__Syms* symsp, const char* namep);
    ~Vthread_scheduler_tb___024root();
    VL_UNCOPYABLE(Vthread_scheduler_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
