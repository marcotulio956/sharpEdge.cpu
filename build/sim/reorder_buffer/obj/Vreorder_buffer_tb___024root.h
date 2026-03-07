// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreorder_buffer_tb.h for the primary calling header

#ifndef VERILATED_VREORDER_BUFFER_TB___024ROOT_H_
#define VERILATED_VREORDER_BUFFER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vreorder_buffer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreorder_buffer_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ reorder_buffer_tb__DOT__clk;
    CData/*0:0*/ reorder_buffer_tb__DOT__rst;
    CData/*0:0*/ reorder_buffer_tb__DOT__write_entry;
    CData/*3:0*/ reorder_buffer_tb__DOT__entry_opc;
    CData/*0:0*/ reorder_buffer_tb__DOT__cdb_write;
    CData/*4:0*/ reorder_buffer_tb__DOT__cdb_rob_adrs;
    CData/*2:0*/ reorder_buffer_tb__DOT__cdb_exception;
    CData/*0:0*/ reorder_buffer_tb__DOT__created_entry_bool;
    CData/*0:0*/ reorder_buffer_tb__DOT__ready1_instruction_bool;
    CData/*0:0*/ reorder_buffer_tb__DOT__ready2_instruction_bool;
    CData/*0:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__1;
    CData/*0:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_ha219d3de__0;
    CData/*0:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__0;
    CData/*2:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h2139a5d7__0;
    CData/*0:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_haf3df95a__0;
    CData/*3:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_he2a65739__0;
    CData/*0:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hb27e5a1c__0;
    CData/*4:0*/ reorder_buffer_tb__DOT___DUT___DOT__poshead;
    CData/*4:0*/ reorder_buffer_tb__DOT___DUT___DOT__head;
    CData/*4:0*/ reorder_buffer_tb__DOT___DUT___DOT__tail;
    CData/*4:0*/ __Vdly__reorder_buffer_tb__DOT___DUT___DOT__head;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v0;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v0;
    CData/*4:0*/ __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__value__v31;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31;
    CData/*2:0*/ __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__exception__v31;
    CData/*4:0*/ __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__exception__v31;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ reorder_buffer_tb__DOT__entry_destination;
    SData/*15:0*/ reorder_buffer_tb__DOT__entry_pc;
    SData/*15:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hbd3dc64f__0;
    SData/*15:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h236f626c__0;
    IData/*31:0*/ reorder_buffer_tb__DOT__cdb_snooped_value;
    IData/*31:0*/ reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h5a9a1b20__0;
    IData/*30:0*/ reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit;
    IData/*31:0*/ __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__value__v31;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 31> reorder_buffer_tb__DOT___DUT___DOT__pc_state;
    VlUnpacked<CData/*2:0*/, 31> reorder_buffer_tb__DOT___DUT___DOT__exception;
    VlUnpacked<IData/*31:0*/, 31> reorder_buffer_tb__DOT___DUT___DOT__value;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4fa0f4e0__0;
    VlTriggerScheduler __VtrigSched_h4fa0f58a__0;

    // INTERNAL VARIABLES
    Vreorder_buffer_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vreorder_buffer_tb___024root(Vreorder_buffer_tb__Syms* symsp, const char* namep);
    ~Vreorder_buffer_tb___024root();
    VL_UNCOPYABLE(Vreorder_buffer_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
