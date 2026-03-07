// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreorder_buffer_tb.h for the primary calling header

#include "Vreorder_buffer_tb__pch.h"

VlCoroutine Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__0(Vreorder_buffer_tb___024root* vlSelf);
VlCoroutine Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__1(Vreorder_buffer_tb___024root* vlSelf);

void Vreorder_buffer_tb___024root___eval_initial(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_initial\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__0(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reorder_buffer_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                             49);
        vlSelfRef.reorder_buffer_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.reorder_buffer_tb__DOT__clk)));
    }
    co_return;
}

void Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(Vreorder_buffer_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_hf052037c_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h43cf6736_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h0e4ce968_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_ha6615b15_0;
void Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(Vreorder_buffer_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h834625fa_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h983a550d_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_heef07d98_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h904117de_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h88b198d6_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_ha19ee5f2_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h459070cb_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h8d3aefa9_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h3aebb6c7_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_hc40613ef_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_hdf84b9c1_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h5c8b1709_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_hda0688ec_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_hd8f713a5_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_hc6205869_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h6027e787_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h02e3f4f3_0;
extern const VlWide<8>/*255:0*/ Vreorder_buffer_tb__ConstPool__CONST_h7bfdae44_0;

VlCoroutine Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__1(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ reorder_buffer_tb__DOT__pass_count;
    reorder_buffer_tb__DOT__pass_count = 0;
    IData/*31:0*/ reorder_buffer_tb__DOT__fail_count;
    reorder_buffer_tb__DOT__fail_count = 0;
    IData/*31:0*/ reorder_buffer_tb__DOT__i;
    reorder_buffer_tb__DOT__i = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__1__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__1__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__1__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__1__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__1__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__1__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__2__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__2__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__2__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__2__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__2__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__2__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__3__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__3__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__3__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__3__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__3__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__3__name);
    CData/*4:0*/ __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__expected;
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__expected = 0;
    CData/*4:0*/ __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__actual;
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__5__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__5__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__5__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__5__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__5__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__5__name);
    CData/*4:0*/ __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__expected;
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__expected = 0;
    CData/*4:0*/ __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__actual;
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__7__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__7__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__7__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__7__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__7__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__7__name);
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__8__expected;
    __Vtask_reorder_buffer_tb__DOT__check32__8__expected = 0;
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__8__actual;
    __Vtask_reorder_buffer_tb__DOT__check32__8__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check32__8__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check32__8__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__9__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__9__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__9__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__9__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__9__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__9__name);
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__pc_v = 0;
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__pc_v = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__13__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__13__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__13__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__13__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__13__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__13__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__14__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__14__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__14__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__14__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__14__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__14__name);
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__15__expected;
    __Vtask_reorder_buffer_tb__DOT__check32__15__expected = 0;
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__15__actual;
    __Vtask_reorder_buffer_tb__DOT__check32__15__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check32__15__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check32__15__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__16__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__16__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__16__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__16__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__16__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__16__name);
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__pc_v = 0;
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__pc_v = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__20__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__20__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__20__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__20__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__20__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__20__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__21__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__21__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__21__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__21__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__21__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__21__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__22__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__22__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__22__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__22__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__22__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__22__name);
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__pc_v = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__25__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__25__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__25__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__25__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__25__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__25__name);
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__pc_v = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__27__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__27__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__27__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__27__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__27__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__27__name);
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__28__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__28__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__28__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__28__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__28__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__28__name);
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__pc_v = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__31__expected;
    __Vtask_reorder_buffer_tb__DOT__check_bool__31__expected = 0;
    CData/*0:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__31__actual;
    __Vtask_reorder_buffer_tb__DOT__check_bool__31__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check_bool__31__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__31__name);
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__32__expected;
    __Vtask_reorder_buffer_tb__DOT__check32__32__expected = 0;
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__32__actual;
    __Vtask_reorder_buffer_tb__DOT__check32__32__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check32__32__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check32__32__name);
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__pc_v = 0;
    CData/*3:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__opc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__opc_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__dest_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__dest_v = 0;
    SData/*15:0*/ __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__pc_v;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__pc_v = 0;
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__36__expected;
    __Vtask_reorder_buffer_tb__DOT__check32__36__expected = 0;
    IData/*31:0*/ __Vtask_reorder_buffer_tb__DOT__check32__36__actual;
    __Vtask_reorder_buffer_tb__DOT__check32__36__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_reorder_buffer_tb__DOT__check32__36__name;
    VL_ZERO_W(256, __Vtask_reorder_buffer_tb__DOT__check32__36__name);
    // Body
    reorder_buffer_tb__DOT__pass_count = 0U;
    reorder_buffer_tb__DOT__fail_count = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    VL_WRITEF_NX("\n=== TEST 1: Reset ===\n",0);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         150);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         166);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__1__name, Vreorder_buffer_tb__ConstPool__CONST_hf052037c_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__1__actual 
        = ((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                           - (IData)(1U))) == (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail));
    __Vtask_reorder_buffer_tb__DOT__check_bool__1__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__1__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__1__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__1__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__1__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__1__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__1__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__1__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__2__name, Vreorder_buffer_tb__ConstPool__CONST_h43cf6736_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__2__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__2__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__2__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__2__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__2__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__2__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__2__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__2__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__2__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__3__name, Vreorder_buffer_tb__ConstPool__CONST_h0e4ce968_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__3__actual 
        = ((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
           & ((0x1eU >= (0x0000001fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)))) 
              & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                 >> (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))))));
    __Vtask_reorder_buffer_tb__DOT__check_bool__3__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__3__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__3__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__3__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__3__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__3__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__3__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__3__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__name, Vreorder_buffer_tb__ConstPool__CONST_ha6615b15_0);
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__actual 
        = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail;
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__4__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__4__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__name.data(),
                     5,(IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__4__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%0# got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_robadrs__4__name.data(),
                     5,(IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__4__expected),
                     5,__Vtask_reorder_buffer_tb__DOT__check_robadrs__4__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 2: Single allocation ===\n",0);
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         176);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination = 3U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = 0xaaaaU;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         179);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         179);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__5__name, Vreorder_buffer_tb__ConstPool__CONST_h834625fa_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__5__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__5__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__5__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__5__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__5__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__5__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__5__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__5__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__5__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__name, Vreorder_buffer_tb__ConstPool__CONST_h983a550d_0);
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__actual 
        = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail;
    __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__6__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__6__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__name.data(),
                     5,(IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__6__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%0# got=%0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_robadrs__6__name.data(),
                     5,(IData)(__Vtask_reorder_buffer_tb__DOT__check_robadrs__6__expected),
                     5,__Vtask_reorder_buffer_tb__DOT__check_robadrs__6__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    VL_WRITEF_NX("\n=== TEST 3: Single commit ===\n",0);
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         191);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0xdeadbeefU;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         194);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         194);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__7__name, Vreorder_buffer_tb__ConstPool__CONST_heef07d98_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__7__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__7__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__7__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__7__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__7__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__7__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__7__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__7__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__7__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check32__8__name, Vreorder_buffer_tb__ConstPool__CONST_h904117de_0);
    __Vtask_reorder_buffer_tb__DOT__check32__8__expected = 0xdeadbeefU;
    __Vtask_reorder_buffer_tb__DOT__check32__8__actual 
        = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))
            ? vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value
           [vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head]
            : 0U);
    if ((__Vtask_reorder_buffer_tb__DOT__check32__8__expected 
         == __Vtask_reorder_buffer_tb__DOT__check32__8__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__8__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__8__actual);
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__8__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__8__expected,
                     32,__Vtask_reorder_buffer_tb__DOT__check32__8__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         200);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         200);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__9__name, Vreorder_buffer_tb__ConstPool__CONST_h88b198d6_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__9__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__9__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__9__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__9__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__9__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__9__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__9__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__9__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__9__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 4: Sequential single commits (double-commit analysis) ===\n",0);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         150);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__pc_v = 0x0010U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__dest_v = 0xff01U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__opc_v = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__11__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__pc_v = 0x0020U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__dest_v = 0xff02U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__opc_v = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__12__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         219);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0xaaaa0001U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         222);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         222);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__13__name, Vreorder_buffer_tb__ConstPool__CONST_ha19ee5f2_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__13__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__13__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__13__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__13__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__13__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__13__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__13__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__13__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__13__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         225);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0xaaaa0002U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         228);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         228);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__14__name, Vreorder_buffer_tb__ConstPool__CONST_h459070cb_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__14__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__14__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__14__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__14__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__14__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__14__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__14__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__14__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__14__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check32__15__name, Vreorder_buffer_tb__ConstPool__CONST_h8d3aefa9_0);
    __Vtask_reorder_buffer_tb__DOT__check32__15__expected = 0xaaaa0002U;
    __Vtask_reorder_buffer_tb__DOT__check32__15__actual 
        = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))
            ? vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value
           [vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head]
            : 0U);
    if ((__Vtask_reorder_buffer_tb__DOT__check32__15__expected 
         == __Vtask_reorder_buffer_tb__DOT__check32__15__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__15__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__15__actual);
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__15__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__15__expected,
                     32,__Vtask_reorder_buffer_tb__DOT__check32__15__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         233);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         233);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__16__name, Vreorder_buffer_tb__ConstPool__CONST_h3aebb6c7_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__16__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__16__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__16__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__16__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__16__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__16__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__16__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__16__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__16__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 5: Single commit when head+1 not ready ===\n",0);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         150);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__pc_v = 0x0030U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__dest_v = 0xcc01U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__opc_v = 2U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__18__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__pc_v = 0x0040U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__dest_v = 0xcc02U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__opc_v = 3U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__19__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         245);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0x55555555U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         248);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         248);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__20__name, Vreorder_buffer_tb__ConstPool__CONST_hc40613ef_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__20__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__20__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__20__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__20__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__20__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__20__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__20__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__20__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__20__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__21__name, Vreorder_buffer_tb__ConstPool__CONST_hdf84b9c1_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__21__actual 
        = ((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
           & ((0x1eU >= (0x0000001fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)))) 
              & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                 >> (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))))));
    __Vtask_reorder_buffer_tb__DOT__check_bool__21__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__21__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__21__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__21__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__21__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__21__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__21__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__21__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         253);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         253);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__22__name, Vreorder_buffer_tb__ConstPool__CONST_h5c8b1709_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__22__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__22__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__22__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__22__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__22__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__22__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__22__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__22__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__22__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 6: FIFO full ===\n",0);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         150);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 0U;
    reorder_buffer_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000001eU, reorder_buffer_tb__DOT__i)) {
        __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__pc_v 
            = (0x0000ffffU & reorder_buffer_tb__DOT__i);
        __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__dest_v 
            = (0x0000ffffU & reorder_buffer_tb__DOT__i);
        __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__opc_v = 0x0fU;
        Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                                 "@(negedge reorder_buffer_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge reorder_buffer_tb.clk)", 
                                                             "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                             137);
        vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
        vlSelfRef.reorder_buffer_tb__DOT__entry_opc 
            = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__opc_v;
        vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
            = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__dest_v;
        vlSelfRef.reorder_buffer_tb__DOT__entry_pc 
            = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__24__pc_v;
        Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                                 "@(posedge reorder_buffer_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge reorder_buffer_tb.clk)", 
                                                             "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                             142);
        vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
        reorder_buffer_tb__DOT__i = ((IData)(1U) + reorder_buffer_tb__DOT__i);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         265);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__25__name, Vreorder_buffer_tb__ConstPool__CONST_hda0688ec_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__25__actual 
        = ((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                           - (IData)(1U))) == (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail));
    __Vtask_reorder_buffer_tb__DOT__check_bool__25__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__25__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__25__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__25__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__25__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__25__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__25__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__25__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__pc_v = 0xeeeeU;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__dest_v = 0xeeeeU;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__opc_v = 0x0fU;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__26__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         269);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__27__name, Vreorder_buffer_tb__ConstPool__CONST_hd8f713a5_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__27__actual 
        = ((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                           - (IData)(1U))) == (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail));
    __Vtask_reorder_buffer_tb__DOT__check_bool__27__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__27__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__27__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__27__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__27__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__27__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__27__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__27__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__28__name, Vreorder_buffer_tb__ConstPool__CONST_hc6205869_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__28__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__28__expected = 0U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__28__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__28__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__28__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__28__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__28__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__28__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__28__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 7: Exception propagation ===\n",0);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         150);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__pc_v = 0xbeefU;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__dest_v = 0x00aaU;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__opc_v = 5U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__30__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         281);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 2U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         284);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         284);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check_bool__31__name, Vreorder_buffer_tb__ConstPool__CONST_h6027e787_0);
    __Vtask_reorder_buffer_tb__DOT__check_bool__31__actual 
        = vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool;
    __Vtask_reorder_buffer_tb__DOT__check_bool__31__expected = 1U;
    if (((IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__31__expected) 
         == (IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__31__actual))) {
        VL_WRITEF_NX("PASS [%0t] %s | got=%b\n",0,64,
                     VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__31__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__31__actual));
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=%b got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check_bool__31__name.data(),
                     1,(IData)(__Vtask_reorder_buffer_tb__DOT__check_bool__31__expected),
                     1,__Vtask_reorder_buffer_tb__DOT__check_bool__31__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    if ((2U == ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))
                 ? vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception
                [vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head]
                 : 0U))) {
        VL_WRITEF_NX("PASS [%0t] exception_code_010_propagated\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] exception_code_010 | expected=010 got=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,3,
                     ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))
                       ? vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception
                      [vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head]
                       : 0U));
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check32__32__name, Vreorder_buffer_tb__ConstPool__CONST_h02e3f4f3_0);
    __Vtask_reorder_buffer_tb__DOT__check32__32__expected = 0x0000beefU;
    __Vtask_reorder_buffer_tb__DOT__check32__32__actual 
        = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))
            ? vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state
           [vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head]
            : 0U);
    if ((__Vtask_reorder_buffer_tb__DOT__check32__32__expected 
         == __Vtask_reorder_buffer_tb__DOT__check32__32__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__32__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__32__actual);
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__32__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__32__expected,
                     32,__Vtask_reorder_buffer_tb__DOT__check32__32__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n=== TEST 8: Misprediction flush \342\200\224 architecture gap ===\nINFO: No flush port exists. rst is the only recovery mechanism.\nINFO: Guidelines require selective tail\342\206\222head flush. NOT IMPLEMENTED.\n\n=== TEST 9: PC preservation ===\n",0);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         150);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         150);
    vlSelfRef.reorder_buffer_tb__DOT__rst = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__pc_v = 0x0100U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__dest_v = 1U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__opc_v = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__34__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__pc_v = 0x0200U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__dest_v = 2U;
    __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__opc_v = 1U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         137);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__entry_opc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__opc_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_destination 
        = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__dest_v;
    vlSelfRef.reorder_buffer_tb__DOT__entry_pc = __Vtask_reorder_buffer_tb__DOT__alloc_one_posedge__35__pc_v;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         142);
    vlSelfRef.reorder_buffer_tb__DOT__write_entry = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         313);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 0U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0xabcdef01U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         316);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(vlSelf, 
                                                             "@(negedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f58a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         318);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs = 1U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value = 0xabcdef02U;
    vlSelfRef.reorder_buffer_tb__DOT__cdb_exception = 0U;
    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(vlSelf, 
                                                             "@(posedge reorder_buffer_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h4fa0f4e0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge reorder_buffer_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                                         321);
    vlSelfRef.reorder_buffer_tb__DOT__cdb_write = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 
                                         321);
    __Vtask_reorder_buffer_tb__DOT__check32__36__actual 
        = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))
            ? vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state
           [vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head]
            : 0U);
    VL_ASSIGN_W(256, __Vtask_reorder_buffer_tb__DOT__check32__36__name, Vreorder_buffer_tb__ConstPool__CONST_h7bfdae44_0);
    __Vtask_reorder_buffer_tb__DOT__check32__36__expected = 0x00000200U;
    if ((__Vtask_reorder_buffer_tb__DOT__check32__36__expected 
         == __Vtask_reorder_buffer_tb__DOT__check32__36__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__36__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__36__actual);
        reorder_buffer_tb__DOT__pass_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_reorder_buffer_tb__DOT__check32__36__name.data(),
                     32,__Vtask_reorder_buffer_tb__DOT__check32__36__expected,
                     32,__Vtask_reorder_buffer_tb__DOT__check32__36__actual);
        reorder_buffer_tb__DOT__fail_count = ((IData)(1U) 
                                              + reorder_buffer_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- reorder_buffer_tb: PASS=%0d FAIL=%0d ---\n\n",0,
                 32,reorder_buffer_tb__DOT__pass_count,
                 32,reorder_buffer_tb__DOT__fail_count);
    VL_FINISH_MT("/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 327, "");
    co_return;
}

void Vreorder_buffer_tb___024root___eval_triggers_vec__act(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_triggers_vec__act\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.reorder_buffer_tb__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.reorder_buffer_tb__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.reorder_buffer_tb__DOT__clk) 
                                                           ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0 
        = vlSelfRef.reorder_buffer_tb__DOT__clk;
}

bool Vreorder_buffer_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vreorder_buffer_tb___024root___act_comb__TOP__0(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___act_comb__TOP__0\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool 
        = (((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                            - (IData)(1U))) != (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail)) 
           & (IData)(vlSelfRef.reorder_buffer_tb__DOT__write_entry));
}

void Vreorder_buffer_tb___024root___eval_act(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_act\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000eULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool 
            = (((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                                - (IData)(1U))) != (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail)) 
               & (IData)(vlSelfRef.reorder_buffer_tb__DOT__write_entry));
    }
}

void Vreorder_buffer_tb___024root___nba_sequent__TOP__0(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___nba_sequent__TOP__0\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v0 = 0U;
    vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v0 = 0U;
    vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 0U;
    vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 0U;
    vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head 
        = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head;
}

void Vreorder_buffer_tb___024root___nba_sequent__TOP__1(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___nba_sequent__TOP__1\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<CData/*3:0*/, 31> reorder_buffer_tb__DOT___DUT___DOT__opc;
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        reorder_buffer_tb__DOT___DUT___DOT__opc[__Vi0] = 0;
    }
    VlUnpacked<SData/*15:0*/, 31> reorder_buffer_tb__DOT___DUT___DOT__destination;
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        reorder_buffer_tb__DOT___DUT___DOT__destination[__Vi0] = 0;
    }
    CData/*4:0*/ __Vdly__reorder_buffer_tb__DOT___DUT___DOT__tail;
    __Vdly__reorder_buffer_tb__DOT___DUT___DOT__tail = 0;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v0;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v0 = 0;
    SData/*15:0*/ __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62;
    __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 = 0;
    CData/*4:0*/ __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62;
    __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 = 0;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 = 0;
    CData/*3:0*/ __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__opc__v31;
    __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 = 0;
    CData/*4:0*/ __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__opc__v31;
    __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 = 0;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__opc__v31;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 = 0;
    SData/*15:0*/ __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__destination__v31;
    __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 = 0;
    CData/*4:0*/ __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__destination__v31;
    __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 = 0;
    CData/*0:0*/ __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__destination__v31;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 = 0;
    // Body
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 = 0U;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 = 0U;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 = 0U;
    __Vdly__reorder_buffer_tb__DOT___DUT___DOT__tail 
        = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail;
    __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v0 = 0U;
    if (vlSelfRef.reorder_buffer_tb__DOT__rst) {
        vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v0 = 1U;
        vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v0 = 1U;
        vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head = 0U;
        __Vdly__reorder_buffer_tb__DOT___DUT___DOT__tail = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit = 0U;
        __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v0 = 1U;
    } else if (vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hb27e5a1c__0 = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h236f626c__0 
            = vlSelfRef.reorder_buffer_tb__DOT__entry_pc;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_he2a65739__0 
            = vlSelfRef.reorder_buffer_tb__DOT__entry_opc;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hbd3dc64f__0 
            = vlSelfRef.reorder_buffer_tb__DOT__entry_destination;
        if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail))) {
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail))) 
                    & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                   | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hb27e5a1c__0) 
                                     << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail))));
            __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 
                = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h236f626c__0;
            __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 
                = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail;
            __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62 = 1U;
            __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 
                = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_he2a65739__0;
            __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 
                = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail;
            __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__opc__v31 = 1U;
            __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 
                = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_hbd3dc64f__0;
            __VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 
                = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail;
            __VdlySet__reorder_buffer_tb__DOT___DUT___DOT__destination__v31 = 1U;
        }
        __Vdly__reorder_buffer_tb__DOT___DUT___DOT__tail 
            = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail)));
    }
    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail 
        = __Vdly__reorder_buffer_tb__DOT___DUT___DOT__tail;
    if (__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v0) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[0U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[0U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[1U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[1U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[2U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[2U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[3U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[3U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[4U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[4U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[5U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[5U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[6U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[6U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[7U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[7U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[8U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[8U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[9U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[9U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[10U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[10U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[11U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[11U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[12U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[12U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[13U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[13U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[14U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[14U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[15U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[15U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[16U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[16U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[17U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[17U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[18U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[18U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[19U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[19U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[20U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[20U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[21U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[21U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[22U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[22U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[23U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[23U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[24U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[24U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[25U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[25U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[26U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[26U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[27U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[27U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[28U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[28U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[29U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[29U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[30U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[30U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[0U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[1U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[2U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[3U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[4U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[5U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[6U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[7U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[8U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[9U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[10U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[11U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[12U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[13U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[14U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[15U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[16U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[17U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[18U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[19U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[20U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[21U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[22U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[23U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[24U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[25U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[26U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[27U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[28U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[29U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__opc[30U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[0U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[1U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[2U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[3U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[4U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[5U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[6U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[7U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[8U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[9U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[10U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[11U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[12U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[13U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[14U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[15U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[16U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[17U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[18U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[19U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[20U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[21U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[22U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[23U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[24U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[25U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[26U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[27U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[28U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[29U] = 0U;
        reorder_buffer_tb__DOT___DUT___DOT__destination[30U] = 0U;
    }
    if (__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__pc_state[__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62] 
            = __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__pc_state__v62;
    }
    if (__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__opc__v31) {
        reorder_buffer_tb__DOT___DUT___DOT__opc[__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__opc__v31] 
            = __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__opc__v31;
    }
    if (__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__destination__v31) {
        reorder_buffer_tb__DOT___DUT___DOT__destination[__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__destination__v31] 
            = __VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__destination__v31;
    }
}

void Vreorder_buffer_tb___024root___nba_sequent__TOP__2(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___nba_sequent__TOP__2\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.reorder_buffer_tb__DOT__rst)))) {
        if (vlSelfRef.reorder_buffer_tb__DOT__cdb_write) {
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h2139a5d7__0 
                = vlSelfRef.reorder_buffer_tb__DOT__cdb_exception;
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h5a9a1b20__0 
                = vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value;
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_haf3df95a__0 = 1U;
            if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs))) {
                vlSelfRef.__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 
                    = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h2139a5d7__0;
                vlSelfRef.__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 
                    = vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs;
                vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 1U;
                vlSelfRef.__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__value__v31 
                    = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h5a9a1b20__0;
                vlSelfRef.__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__value__v31 
                    = vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs;
                vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 1U;
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs))) 
                        & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                       | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_haf3df95a__0) 
                                         << (IData)(vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs))));
            }
        }
        if (((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
             & (IData)(vlSelfRef.reorder_buffer_tb__DOT__ready2_instruction_bool))) {
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__0 = 0U;
            if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) {
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) 
                        & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                       | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__0) 
                                         << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))));
            }
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_ha219d3de__0 = 0U;
            if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead))) {
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead))) 
                        & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                       | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_ha219d3de__0) 
                                         << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead))));
            }
            vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head 
                = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
        } else if (vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) {
            vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__1 = 0U;
            if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) {
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) 
                        & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                       | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__1) 
                                         << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))));
            }
            vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
        }
    }
}

void Vreorder_buffer_tb___024root___nba_sequent__TOP__3(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___nba_sequent__TOP__3\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v0) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[0U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[1U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[2U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[3U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[4U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[5U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[6U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[7U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[8U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[9U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[10U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[11U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[12U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[13U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[14U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[15U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[16U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[17U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[18U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[19U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[20U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[21U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[22U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[23U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[24U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[25U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[26U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[27U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[28U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[29U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[30U] = 0U;
    }
    if (vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__exception[vlSelfRef.__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__exception__v31] 
            = vlSelfRef.__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__exception__v31;
    }
    if (vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v0) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[0U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[1U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[2U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[3U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[4U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[5U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[6U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[7U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[8U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[9U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[10U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[11U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[12U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[13U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[14U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[15U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[16U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[17U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[18U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[19U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[20U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[21U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[22U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[23U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[24U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[25U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[26U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[27U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[28U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[29U] = 0U;
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[30U] = 0U;
    }
    if (vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31) {
        vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__value[vlSelfRef.__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__value__v31] 
            = vlSelfRef.__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__value__v31;
    }
    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head 
        = vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head;
    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
    vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool 
        = ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)) 
           & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
              >> (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
    vlSelfRef.reorder_buffer_tb__DOT__ready2_instruction_bool 
        = ((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
           & ((0x1eU >= (0x0000001fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)))) 
              & (vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                 >> (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))))));
}

void Vreorder_buffer_tb___024root___eval_nba(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_nba\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v0 = 0U;
        vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v0 = 0U;
        vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 0U;
        vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 0U;
        vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head 
            = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vreorder_buffer_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.reorder_buffer_tb__DOT__rst)))) {
            if (vlSelfRef.reorder_buffer_tb__DOT__cdb_write) {
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h2139a5d7__0 
                    = vlSelfRef.reorder_buffer_tb__DOT__cdb_exception;
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h5a9a1b20__0 
                    = vlSelfRef.reorder_buffer_tb__DOT__cdb_snooped_value;
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_haf3df95a__0 = 1U;
                if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs))) {
                    vlSelfRef.__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 
                        = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h2139a5d7__0;
                    vlSelfRef.__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 
                        = vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs;
                    vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__exception__v31 = 1U;
                    vlSelfRef.__VdlyVal__reorder_buffer_tb__DOT___DUT___DOT__value__v31 
                        = vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h5a9a1b20__0;
                    vlSelfRef.__VdlyDim0__reorder_buffer_tb__DOT___DUT___DOT__value__v31 
                        = vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs;
                    vlSelfRef.__VdlySet__reorder_buffer_tb__DOT___DUT___DOT__value__v31 = 1U;
                    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs))) 
                            & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                           | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_haf3df95a__0) 
                                             << (IData)(vlSelfRef.reorder_buffer_tb__DOT__cdb_rob_adrs))));
                }
            }
            if (((IData)(vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) 
                 & (IData)(vlSelfRef.reorder_buffer_tb__DOT__ready2_instruction_bool))) {
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__0 = 0U;
                if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) {
                    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) 
                            & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                           | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__0) 
                                             << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))));
                }
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_ha219d3de__0 = 0U;
                if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead))) {
                    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead))) 
                            & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                           | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_ha219d3de__0) 
                                             << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__poshead))));
                }
                vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head 
                    = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
            } else if (vlSelfRef.reorder_buffer_tb__DOT__ready1_instruction_bool) {
                vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__1 = 0U;
                if ((0x1eU >= (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) {
                    vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))) 
                            & vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__ready_to_commit) 
                           | (0x7fffffffU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT____Vlvbound_h6bbb5bc6__1) 
                                             << (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head))));
                }
                vlSelfRef.__Vdly__reorder_buffer_tb__DOT___DUT___DOT__head 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head)));
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vreorder_buffer_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.reorder_buffer_tb__DOT__created_entry_bool 
            = (((0x0000001fU & ((IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__head) 
                                - (IData)(1U))) != (IData)(vlSelfRef.reorder_buffer_tb__DOT___DUT___DOT__tail)) 
               & (IData)(vlSelfRef.reorder_buffer_tb__DOT__write_entry));
    }
}

void Vreorder_buffer_tb___024root___timing_ready(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___timing_ready\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready("@(posedge reorder_buffer_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready("@(negedge reorder_buffer_tb.clk)");
    }
}

void Vreorder_buffer_tb___024root___timing_resume(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___timing_resume\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h4fa0f4e0__0.moveToResumeQueue(
                                                          "@(posedge reorder_buffer_tb.clk)");
    vlSelfRef.__VtrigSched_h4fa0f58a__0.moveToResumeQueue(
                                                          "@(negedge reorder_buffer_tb.clk)");
    vlSelfRef.__VtrigSched_h4fa0f4e0__0.resume("@(posedge reorder_buffer_tb.clk)");
    vlSelfRef.__VtrigSched_h4fa0f58a__0.resume("@(negedge reorder_buffer_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vreorder_buffer_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreorder_buffer_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vreorder_buffer_tb___024root___eval_phase__act(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_phase__act\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vreorder_buffer_tb___024root___eval_triggers_vec__act(vlSelf);
    Vreorder_buffer_tb___024root___timing_ready(vlSelf);
    Vreorder_buffer_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreorder_buffer_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vreorder_buffer_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vreorder_buffer_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vreorder_buffer_tb___024root___timing_resume(vlSelf);
        Vreorder_buffer_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreorder_buffer_tb___024root___eval_phase__inact(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_phase__inact\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 13, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vreorder_buffer_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vreorder_buffer_tb___024root___eval_phase__nba(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_phase__nba\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vreorder_buffer_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vreorder_buffer_tb___024root___eval_nba(vlSelf);
        Vreorder_buffer_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vreorder_buffer_tb___024root___eval(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vreorder_buffer_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 13, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 13, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vreorder_buffer_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/mark/sev3/testbenches/reorder_buffer_tb.sv", 13, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vreorder_buffer_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vreorder_buffer_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vreorder_buffer_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0(Vreorder_buffer_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f4e0__0\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.reorder_buffer_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0)) 
                                   << 3U) | (((IData)(vlSelfRef.reorder_buffer_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0))) 
                                             << 1U))));
    vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0 
        = vlSelfRef.reorder_buffer_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0(Vreorder_buffer_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root____VbeforeTrig_h4fa0f58a__0\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.reorder_buffer_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0)) 
                                   << 3U) | (((IData)(vlSelfRef.reorder_buffer_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0))) 
                                             << 1U))));
    vlSelfRef.__Vtrigprevexpr___TOP__reorder_buffer_tb__DOT__clk__0 
        = vlSelfRef.reorder_buffer_tb__DOT__clk;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f4e0__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4fa0f58a__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vreorder_buffer_tb___024root___eval_debug_assertions(Vreorder_buffer_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreorder_buffer_tb___024root___eval_debug_assertions\n"); );
    Vreorder_buffer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
