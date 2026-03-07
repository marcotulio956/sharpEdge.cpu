// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory_tb.h for the primary calling header

#include "Vdata_memory_tb__pch.h"

VlCoroutine Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__0(Vdata_memory_tb___024root* vlSelf);
VlCoroutine Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__1(Vdata_memory_tb___024root* vlSelf);

void Vdata_memory_tb___024root___eval_initial(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_initial\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(false, 32, 256, 0, "dm_init.txt"s,  &(vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem)
                 , 0, ~0ULL);
    Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__0(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_memory_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                             20);
        vlSelfRef.data_memory_tb__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.data_memory_tb__DOT__clk)));
    }
    co_return;
}

extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h5aee1387_0;
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h609ff401_0;
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_hf4f918cc_0;
void Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(Vdata_memory_tb___024root* vlSelf, const char* __VeventDescription);
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h80b93573_0;
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h2b6f0166_0;
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h37e648af_0;
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h247d3937_0;
extern const VlWide<8>/*255:0*/ Vdata_memory_tb__ConstPool__CONST_h99c98ffe_0;

VlCoroutine Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__1(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ data_memory_tb__DOT__pass_count;
    data_memory_tb__DOT__pass_count = 0;
    IData/*31:0*/ data_memory_tb__DOT__fail_count;
    data_memory_tb__DOT__fail_count = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__0__expected;
    __Vtask_data_memory_tb__DOT__check32__0__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__0__actual;
    __Vtask_data_memory_tb__DOT__check32__0__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__0__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__0__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__1__expected;
    __Vtask_data_memory_tb__DOT__check32__1__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__1__actual;
    __Vtask_data_memory_tb__DOT__check32__1__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__1__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__1__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__2__addr;
    __Vtask_data_memory_tb__DOT__write_and_read0__2__addr = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__2__data;
    __Vtask_data_memory_tb__DOT__write_and_read0__2__data = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__2__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__write_and_read0__2__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__3__expected;
    __Vtask_data_memory_tb__DOT__check32__3__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__3__actual;
    __Vtask_data_memory_tb__DOT__check32__3__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__3__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__3__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__4__addr;
    __Vtask_data_memory_tb__DOT__write_and_read0__4__addr = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__4__data;
    __Vtask_data_memory_tb__DOT__write_and_read0__4__data = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__4__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__write_and_read0__4__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__5__expected;
    __Vtask_data_memory_tb__DOT__check32__5__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__5__actual;
    __Vtask_data_memory_tb__DOT__check32__5__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__5__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__5__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__6__expected;
    __Vtask_data_memory_tb__DOT__check32__6__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__6__actual;
    __Vtask_data_memory_tb__DOT__check32__6__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__6__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__6__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__7__expected;
    __Vtask_data_memory_tb__DOT__check32__7__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__7__actual;
    __Vtask_data_memory_tb__DOT__check32__7__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__7__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__7__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__8__addr;
    __Vtask_data_memory_tb__DOT__write_and_read0__8__addr = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__8__data;
    __Vtask_data_memory_tb__DOT__write_and_read0__8__data = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__write_and_read0__8__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__write_and_read0__8__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__9__expected;
    __Vtask_data_memory_tb__DOT__check32__9__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__9__actual;
    __Vtask_data_memory_tb__DOT__check32__9__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__9__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__9__name);
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__10__expected;
    __Vtask_data_memory_tb__DOT__check32__10__expected = 0;
    IData/*31:0*/ __Vtask_data_memory_tb__DOT__check32__10__actual;
    __Vtask_data_memory_tb__DOT__check32__10__actual = 0;
    VlWide<8>/*255:0*/ __Vtask_data_memory_tb__DOT__check32__10__name;
    VL_ZERO_W(256, __Vtask_data_memory_tb__DOT__check32__10__name);
    // Body
    data_memory_tb__DOT__pass_count = 0U;
    data_memory_tb__DOT__fail_count = 0U;
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_address0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_address1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0U;
    vlSelfRef.data_memory_tb__DOT__read_address1 = 0U;
    vlSelfRef.data_memory_tb__DOT__read_address0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         88);
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__check32__0__name, Vdata_memory_tb__ConstPool__CONST_h5aee1387_0);
    __Vtask_data_memory_tb__DOT__check32__0__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__0__expected = 0U;
    if ((__Vtask_data_memory_tb__DOT__check32__0__expected 
         == __Vtask_data_memory_tb__DOT__check32__0__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__0__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__0__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__0__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__0__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__0__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    vlSelfRef.data_memory_tb__DOT__read_address0 = 6U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         92);
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__check32__1__name, Vdata_memory_tb__ConstPool__CONST_h609ff401_0);
    __Vtask_data_memory_tb__DOT__check32__1__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__1__expected = 0U;
    if ((__Vtask_data_memory_tb__DOT__check32__1__expected 
         == __Vtask_data_memory_tb__DOT__check32__1__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__1__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__1__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__1__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__1__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__1__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__write_and_read0__2__name, Vdata_memory_tb__ConstPool__CONST_hf4f918cc_0);
    __Vtask_data_memory_tb__DOT__write_and_read0__2__data = 0xdeadbeefU;
    __Vtask_data_memory_tb__DOT__write_and_read0__2__addr = 0x0000000aU;
    vlSelfRef.data_memory_tb__DOT__write0 = 1U;
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_address0 = __Vtask_data_memory_tb__DOT__write_and_read0__2__addr;
    vlSelfRef.data_memory_tb__DOT__write_data0 = __Vtask_data_memory_tb__DOT__write_and_read0__2__data;
    vlSelfRef.data_memory_tb__DOT__read_address0 = __Vtask_data_memory_tb__DOT__write_and_read0__2__addr;
    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(vlSelf, 
                                                          "@(posedge data_memory_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hbd6652ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge data_memory_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                                         61);
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         64);
    __Vtask_data_memory_tb__DOT__check32__3__name[0U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[0U];
    __Vtask_data_memory_tb__DOT__check32__3__name[1U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[1U];
    __Vtask_data_memory_tb__DOT__check32__3__name[2U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[2U];
    __Vtask_data_memory_tb__DOT__check32__3__name[3U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[3U];
    __Vtask_data_memory_tb__DOT__check32__3__name[4U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[4U];
    __Vtask_data_memory_tb__DOT__check32__3__name[5U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[5U];
    __Vtask_data_memory_tb__DOT__check32__3__name[6U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[6U];
    __Vtask_data_memory_tb__DOT__check32__3__name[7U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__name[7U];
    __Vtask_data_memory_tb__DOT__check32__3__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__3__expected 
        = __Vtask_data_memory_tb__DOT__write_and_read0__2__data;
    if ((__Vtask_data_memory_tb__DOT__check32__3__expected 
         == __Vtask_data_memory_tb__DOT__check32__3__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__3__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__3__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__3__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__3__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__3__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__write_and_read0__4__name, Vdata_memory_tb__ConstPool__CONST_h80b93573_0);
    __Vtask_data_memory_tb__DOT__write_and_read0__4__data = 0xcafebabeU;
    __Vtask_data_memory_tb__DOT__write_and_read0__4__addr = 0x00000014U;
    vlSelfRef.data_memory_tb__DOT__write0 = 1U;
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_address0 = __Vtask_data_memory_tb__DOT__write_and_read0__4__addr;
    vlSelfRef.data_memory_tb__DOT__write_data0 = __Vtask_data_memory_tb__DOT__write_and_read0__4__data;
    vlSelfRef.data_memory_tb__DOT__read_address0 = __Vtask_data_memory_tb__DOT__write_and_read0__4__addr;
    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(vlSelf, 
                                                          "@(posedge data_memory_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hbd6652ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge data_memory_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                                         61);
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         64);
    __Vtask_data_memory_tb__DOT__check32__5__name[0U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[0U];
    __Vtask_data_memory_tb__DOT__check32__5__name[1U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[1U];
    __Vtask_data_memory_tb__DOT__check32__5__name[2U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[2U];
    __Vtask_data_memory_tb__DOT__check32__5__name[3U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[3U];
    __Vtask_data_memory_tb__DOT__check32__5__name[4U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[4U];
    __Vtask_data_memory_tb__DOT__check32__5__name[5U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[5U];
    __Vtask_data_memory_tb__DOT__check32__5__name[6U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[6U];
    __Vtask_data_memory_tb__DOT__check32__5__name[7U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__name[7U];
    __Vtask_data_memory_tb__DOT__check32__5__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__5__expected 
        = __Vtask_data_memory_tb__DOT__write_and_read0__4__data;
    if ((__Vtask_data_memory_tb__DOT__check32__5__expected 
         == __Vtask_data_memory_tb__DOT__check32__5__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__5__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__5__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__5__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__5__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__5__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0xffffffffU;
    vlSelfRef.data_memory_tb__DOT__read_address0 = 0x00000014U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         110);
    if ((0xcafebabeU != vlSelfRef.data_memory_tb__DOT__data_out0)) {
        VL_WRITEF_NX("FAIL read_with_nz_wdata0 | got=0x%08x expected=0xcafebabe (regression)\n",0,
                     32,vlSelfRef.data_memory_tb__DOT__data_out0);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    } else {
        VL_WRITEF_NX("PASS read_with_nz_wdata0 | read gates on !write0 (bug fixed)\n",0);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    }
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write0 = 1U;
    vlSelfRef.data_memory_tb__DOT__write1 = 1U;
    vlSelfRef.data_memory_tb__DOT__write_address0 = 0x0000001eU;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0xaaaaaaaaU;
    vlSelfRef.data_memory_tb__DOT__write_address1 = 0x00000028U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0xbbbbbbbbU;
    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(vlSelf, 
                                                          "@(posedge data_memory_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hbd6652ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge data_memory_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                                         127);
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0U;
    vlSelfRef.data_memory_tb__DOT__read_address0 = 0x0000001eU;
    vlSelfRef.data_memory_tb__DOT__read_address1 = 0x00000028U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         131);
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__check32__6__name, Vdata_memory_tb__ConstPool__CONST_h2b6f0166_0);
    __Vtask_data_memory_tb__DOT__check32__6__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__6__expected = 0xaaaaaaaaU;
    if ((__Vtask_data_memory_tb__DOT__check32__6__expected 
         == __Vtask_data_memory_tb__DOT__check32__6__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__6__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__6__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__6__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__6__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__6__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__check32__7__name, Vdata_memory_tb__ConstPool__CONST_h37e648af_0);
    __Vtask_data_memory_tb__DOT__check32__7__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out1;
    __Vtask_data_memory_tb__DOT__check32__7__expected = 0xbbbbbbbbU;
    if ((__Vtask_data_memory_tb__DOT__check32__7__expected 
         == __Vtask_data_memory_tb__DOT__check32__7__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__7__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__7__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__7__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__7__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__7__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    vlSelfRef.data_memory_tb__DOT__write0 = 1U;
    vlSelfRef.data_memory_tb__DOT__write1 = 1U;
    vlSelfRef.data_memory_tb__DOT__write_address0 = 0x00000032U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0x11111111U;
    vlSelfRef.data_memory_tb__DOT__write_address1 = 0x00000032U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0x22222222U;
    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(vlSelf, 
                                                          "@(posedge data_memory_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hbd6652ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge data_memory_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                                         141);
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0U;
    vlSelfRef.data_memory_tb__DOT__read_address0 = 0x00000032U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         145);
    VL_WRITEF_NX("INFO dual_write_same_addr_result: got=0x%08x (write1=0x2222_2222 expected to win by NBA ordering)\n",0,
                 32,vlSelfRef.data_memory_tb__DOT__data_out0);
    if ((0x22222222U == vlSelfRef.data_memory_tb__DOT__data_out0)) {
        VL_WRITEF_NX("PASS dual_write_same_addr_write1_wins\n",0);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL dual_write_same_addr_write1_wins | got=0x%08x\n",0,
                     32,vlSelfRef.data_memory_tb__DOT__data_out0);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__write_and_read0__8__name, Vdata_memory_tb__ConstPool__CONST_h247d3937_0);
    __Vtask_data_memory_tb__DOT__write_and_read0__8__data = 0xccccccccU;
    __Vtask_data_memory_tb__DOT__write_and_read0__8__addr = 0x0000003cU;
    vlSelfRef.data_memory_tb__DOT__write0 = 1U;
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_address0 = __Vtask_data_memory_tb__DOT__write_and_read0__8__addr;
    vlSelfRef.data_memory_tb__DOT__write_data0 = __Vtask_data_memory_tb__DOT__write_and_read0__8__data;
    vlSelfRef.data_memory_tb__DOT__read_address0 = __Vtask_data_memory_tb__DOT__write_and_read0__8__addr;
    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(vlSelf, 
                                                          "@(posedge data_memory_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hbd6652ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge data_memory_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                                         61);
    vlSelfRef.data_memory_tb__DOT__write0 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         64);
    __Vtask_data_memory_tb__DOT__check32__9__name[0U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[0U];
    __Vtask_data_memory_tb__DOT__check32__9__name[1U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[1U];
    __Vtask_data_memory_tb__DOT__check32__9__name[2U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[2U];
    __Vtask_data_memory_tb__DOT__check32__9__name[3U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[3U];
    __Vtask_data_memory_tb__DOT__check32__9__name[4U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[4U];
    __Vtask_data_memory_tb__DOT__check32__9__name[5U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[5U];
    __Vtask_data_memory_tb__DOT__check32__9__name[6U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[6U];
    __Vtask_data_memory_tb__DOT__check32__9__name[7U] 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__name[7U];
    __Vtask_data_memory_tb__DOT__check32__9__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__9__expected 
        = __Vtask_data_memory_tb__DOT__write_and_read0__8__data;
    if ((__Vtask_data_memory_tb__DOT__check32__9__expected 
         == __Vtask_data_memory_tb__DOT__check32__9__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__9__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__9__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__9__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__9__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__9__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    vlSelfRef.data_memory_tb__DOT__write1 = 1U;
    vlSelfRef.data_memory_tb__DOT__write_address1 = 0x00000046U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0xddddddddU;
    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(vlSelf, 
                                                          "@(posedge data_memory_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hbd6652ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge data_memory_tb.clk)", 
                                                         "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                                         162);
    vlSelfRef.data_memory_tb__DOT__write1 = 0U;
    vlSelfRef.data_memory_tb__DOT__write_data1 = 0U;
    vlSelfRef.data_memory_tb__DOT__read_address0 = 0x0000003cU;
    vlSelfRef.data_memory_tb__DOT__write_data0 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/data_memory_tb.sv", 
                                         166);
    VL_ASSIGN_W(256, __Vtask_data_memory_tb__DOT__check32__10__name, Vdata_memory_tb__ConstPool__CONST_h99c98ffe_0);
    __Vtask_data_memory_tb__DOT__check32__10__actual 
        = vlSelfRef.data_memory_tb__DOT__data_out0;
    __Vtask_data_memory_tb__DOT__check32__10__expected = 0xccccccccU;
    if ((__Vtask_data_memory_tb__DOT__check32__10__expected 
         == __Vtask_data_memory_tb__DOT__check32__10__actual)) {
        VL_WRITEF_NX("PASS [%0t] %s | got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__10__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__10__actual);
        data_memory_tb__DOT__pass_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %s | expected=0x%08x got=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,256,
                     __Vtask_data_memory_tb__DOT__check32__10__name.data(),
                     32,__Vtask_data_memory_tb__DOT__check32__10__expected,
                     32,__Vtask_data_memory_tb__DOT__check32__10__actual);
        data_memory_tb__DOT__fail_count = ((IData)(1U) 
                                           + data_memory_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- data_memory_tb: PASS=%0d FAIL=%0d ---\n\n",0,
                 32,data_memory_tb__DOT__pass_count,
                 32,data_memory_tb__DOT__fail_count);
    VL_FINISH_MT("/home/mark/sev3/testbenches/data_memory_tb.sv", 171, "");
    co_return;
}

void Vdata_memory_tb___024root___eval_triggers_vec__act(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_triggers_vec__act\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.data_memory_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_memory_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__data_memory_tb__DOT__clk__0 
        = vlSelfRef.data_memory_tb__DOT__clk;
}

bool Vdata_memory_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___trigger_anySet__act\n"); );
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

void Vdata_memory_tb___024root___act_comb__TOP__0(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___act_comb__TOP__0\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_memory_tb__DOT__data_out0 = ((IData)(vlSelfRef.data_memory_tb__DOT__write0)
                                                 ? 0U
                                                 : vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem
                                                [(0x000000ffU 
                                                  & vlSelfRef.data_memory_tb__DOT__read_address0)]);
    vlSelfRef.data_memory_tb__DOT__data_out1 = ((IData)(vlSelfRef.data_memory_tb__DOT__write1)
                                                 ? 0U
                                                 : vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem
                                                [(0x000000ffU 
                                                  & vlSelfRef.data_memory_tb__DOT__read_address1)]);
}

void Vdata_memory_tb___024root___eval_act(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_act\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.data_memory_tb__DOT__data_out0 = 
            ((IData)(vlSelfRef.data_memory_tb__DOT__write0)
              ? 0U : vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem
             [(0x000000ffU & vlSelfRef.data_memory_tb__DOT__read_address0)]);
        vlSelfRef.data_memory_tb__DOT__data_out1 = 
            ((IData)(vlSelfRef.data_memory_tb__DOT__write1)
              ? 0U : vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem
             [(0x000000ffU & vlSelfRef.data_memory_tb__DOT__read_address1)]);
    }
}

void Vdata_memory_tb___024root___nba_sequent__TOP__0(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___nba_sequent__TOP__0\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    __VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    __VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0;
    // Body
    __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0U;
    __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0U;
    if (vlSelfRef.data_memory_tb__DOT__write0) {
        __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0 
            = vlSelfRef.data_memory_tb__DOT__write_data0;
        __VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0 
            = (0x000000ffU & vlSelfRef.data_memory_tb__DOT__write_address0);
        __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 1U;
    }
    if (vlSelfRef.data_memory_tb__DOT__write1) {
        __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1 
            = vlSelfRef.data_memory_tb__DOT__write_data1;
        __VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1 
            = (0x000000ffU & vlSelfRef.data_memory_tb__DOT__write_address1);
        __VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 1U;
    }
    if (__VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0) {
        vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem[__VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0] 
            = __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    }
    if (__VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1) {
        vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem[__VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1] 
            = __VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    }
}

void Vdata_memory_tb___024root___eval_nba(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_nba\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 0U;
        __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 0U;
        if (vlSelfRef.data_memory_tb__DOT__write0) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0 
                = vlSelfRef.data_memory_tb__DOT__write_data0;
            __Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0 
                = (0x000000ffU & vlSelfRef.data_memory_tb__DOT__write_address0);
            __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0 = 1U;
        }
        if (vlSelfRef.data_memory_tb__DOT__write1) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1 
                = vlSelfRef.data_memory_tb__DOT__write_data1;
            __Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1 
                = (0x000000ffU & vlSelfRef.data_memory_tb__DOT__write_address1);
            __Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1 = 1U;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v0) {
            vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v0] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v0;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__data_memory_tb__DOT___DUT___DOT__data_mem__v1) {
            vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem[__Vinline__nba_sequent__TOP__0___VdlyDim0__data_memory_tb__DOT___DUT___DOT__data_mem__v1] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__data_memory_tb__DOT___DUT___DOT__data_mem__v1;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.data_memory_tb__DOT__data_out0 = 
            ((IData)(vlSelfRef.data_memory_tb__DOT__write0)
              ? 0U : vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem
             [(0x000000ffU & vlSelfRef.data_memory_tb__DOT__read_address0)]);
        vlSelfRef.data_memory_tb__DOT__data_out1 = 
            ((IData)(vlSelfRef.data_memory_tb__DOT__write1)
              ? 0U : vlSelfRef.data_memory_tb__DOT___DUT___DOT__data_mem
             [(0x000000ffU & vlSelfRef.data_memory_tb__DOT__read_address1)]);
    }
}

void Vdata_memory_tb___024root___timing_ready(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___timing_ready\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready("@(posedge data_memory_tb.clk)");
    }
}

void Vdata_memory_tb___024root___timing_resume(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___timing_resume\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hbd6652ba__0.moveToResumeQueue(
                                                          "@(posedge data_memory_tb.clk)");
    vlSelfRef.__VtrigSched_hbd6652ba__0.resume("@(posedge data_memory_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdata_memory_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vdata_memory_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdata_memory_tb___024root___eval_phase__act(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_phase__act\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdata_memory_tb___024root___eval_triggers_vec__act(vlSelf);
    Vdata_memory_tb___024root___timing_ready(vlSelf);
    Vdata_memory_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_memory_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdata_memory_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdata_memory_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vdata_memory_tb___024root___timing_resume(vlSelf);
        Vdata_memory_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdata_memory_tb___024root___eval_phase__inact(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_phase__inact\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/mark/sev3/testbenches/data_memory_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdata_memory_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdata_memory_tb___024root___eval_phase__nba(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_phase__nba\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdata_memory_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdata_memory_tb___024root___eval_nba(vlSelf);
        Vdata_memory_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdata_memory_tb___024root___eval(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdata_memory_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/data_memory_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/mark/sev3/testbenches/data_memory_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vdata_memory_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/mark/sev3/testbenches/data_memory_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vdata_memory_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vdata_memory_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdata_memory_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0(Vdata_memory_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root____VbeforeTrig_hbd6652ba__0\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.data_memory_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_memory_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__data_memory_tb__DOT__clk__0 
        = vlSelfRef.data_memory_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbd6652ba__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vdata_memory_tb___024root___eval_debug_assertions(Vdata_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory_tb___024root___eval_debug_assertions\n"); );
    Vdata_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
