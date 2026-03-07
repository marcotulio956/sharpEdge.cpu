// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstruction_memory_tb.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_MEMORY_TB___024ROOT_H_
#define VERILATED_VINSTRUCTION_MEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vinstruction_memory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinstruction_memory_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ instruction_memory_tb__DOT__address0;
    SData/*15:0*/ instruction_memory_tb__DOT__address1;
    SData/*15:0*/ instruction_memory_tb__DOT__inst_out0;
    SData/*15:0*/ instruction_memory_tb__DOT__inst_out1;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 256> instruction_memory_tb__DOT___DUT___DOT__inst_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_instruction_memory_tb__DOT__check16__0__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__1__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__2__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__3__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__4__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__5__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__6__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__7__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__8__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__9__name;
    std::string __Vtask_instruction_memory_tb__DOT__check16__10__name;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vinstruction_memory_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vinstruction_memory_tb___024root(Vinstruction_memory_tb__Syms* symsp, const char* namep);
    ~Vinstruction_memory_tb___024root();
    VL_UNCOPYABLE(Vinstruction_memory_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
