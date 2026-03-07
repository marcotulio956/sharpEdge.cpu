// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_memory_tb.h for the primary calling header

#ifndef VERILATED_VDATA_MEMORY_TB___024ROOT_H_
#define VERILATED_VDATA_MEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdata_memory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_memory_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ data_memory_tb__DOT__clk;
    CData/*0:0*/ data_memory_tb__DOT__write0;
    CData/*0:0*/ data_memory_tb__DOT__write1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__data_memory_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ data_memory_tb__DOT__write_address0;
    IData/*31:0*/ data_memory_tb__DOT__write_address1;
    IData/*31:0*/ data_memory_tb__DOT__write_data0;
    IData/*31:0*/ data_memory_tb__DOT__write_data1;
    IData/*31:0*/ data_memory_tb__DOT__read_address0;
    IData/*31:0*/ data_memory_tb__DOT__read_address1;
    IData/*31:0*/ data_memory_tb__DOT__data_out0;
    IData/*31:0*/ data_memory_tb__DOT__data_out1;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> data_memory_tb__DOT___DUT___DOT__data_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbd6652ba__0;

    // INTERNAL VARIABLES
    Vdata_memory_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdata_memory_tb___024root(Vdata_memory_tb__Syms* symsp, const char* namep);
    ~Vdata_memory_tb___024root();
    VL_UNCOPYABLE(Vdata_memory_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
