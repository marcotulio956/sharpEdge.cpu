// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbranch_predictor_tb.h for the primary calling header

#ifndef VERILATED_VBRANCH_PREDICTOR_TB___024ROOT_H_
#define VERILATED_VBRANCH_PREDICTOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vbranch_predictor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbranch_predictor_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ branch_predictor_tb__DOT__clk;
    CData/*0:0*/ branch_predictor_tb__DOT__rst;
    CData/*0:0*/ branch_predictor_tb__DOT__branch;
    CData/*0:0*/ branch_predictor_tb__DOT__branch_taken;
    CData/*1:0*/ branch_predictor_tb__DOT___DUT___DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__branch_predictor_tb__DOT__clk__0;
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
    VlTriggerScheduler __VtrigSched_hacc80f2a__0;
    VlTriggerScheduler __VtrigSched_hacc80f80__0;

    // INTERNAL VARIABLES
    Vbranch_predictor_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vbranch_predictor_tb___024root(Vbranch_predictor_tb__Syms* symsp, const char* namep);
    ~Vbranch_predictor_tb___024root();
    VL_UNCOPYABLE(Vbranch_predictor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
