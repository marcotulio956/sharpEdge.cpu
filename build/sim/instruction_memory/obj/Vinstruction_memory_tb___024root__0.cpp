// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory_tb.h for the primary calling header

#include "Vinstruction_memory_tb__pch.h"

VlCoroutine Vinstruction_memory_tb___024root___eval_initial__TOP__Vtiming__0(Vinstruction_memory_tb___024root* vlSelf);

void Vinstruction_memory_tb___024root___eval_initial(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_initial\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(false, 16, 256, 0, "im_init.txt"s,  &(vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem)
                 , 0, ~0ULL);
    Vinstruction_memory_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vinstruction_memory_tb___024root___eval_initial__TOP__Vtiming__0(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ instruction_memory_tb__DOT__pass_count;
    instruction_memory_tb__DOT__pass_count = 0;
    IData/*31:0*/ instruction_memory_tb__DOT__fail_count;
    instruction_memory_tb__DOT__fail_count = 0;
    IData/*31:0*/ instruction_memory_tb__DOT__i;
    instruction_memory_tb__DOT__i = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__0__expected;
    __Vtask_instruction_memory_tb__DOT__check16__0__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__0__actual;
    __Vtask_instruction_memory_tb__DOT__check16__0__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__1__expected;
    __Vtask_instruction_memory_tb__DOT__check16__1__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__1__actual;
    __Vtask_instruction_memory_tb__DOT__check16__1__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__2__expected;
    __Vtask_instruction_memory_tb__DOT__check16__2__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__2__actual;
    __Vtask_instruction_memory_tb__DOT__check16__2__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__3__expected;
    __Vtask_instruction_memory_tb__DOT__check16__3__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__3__actual;
    __Vtask_instruction_memory_tb__DOT__check16__3__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__4__expected;
    __Vtask_instruction_memory_tb__DOT__check16__4__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__4__actual;
    __Vtask_instruction_memory_tb__DOT__check16__4__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__5__expected;
    __Vtask_instruction_memory_tb__DOT__check16__5__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__5__actual;
    __Vtask_instruction_memory_tb__DOT__check16__5__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__6__expected;
    __Vtask_instruction_memory_tb__DOT__check16__6__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__6__actual;
    __Vtask_instruction_memory_tb__DOT__check16__6__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__7__expected;
    __Vtask_instruction_memory_tb__DOT__check16__7__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__7__actual;
    __Vtask_instruction_memory_tb__DOT__check16__7__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__8__expected;
    __Vtask_instruction_memory_tb__DOT__check16__8__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__8__actual;
    __Vtask_instruction_memory_tb__DOT__check16__8__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__9__expected;
    __Vtask_instruction_memory_tb__DOT__check16__9__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__9__actual;
    __Vtask_instruction_memory_tb__DOT__check16__9__actual = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__10__expected;
    __Vtask_instruction_memory_tb__DOT__check16__10__expected = 0;
    SData/*15:0*/ __Vtask_instruction_memory_tb__DOT__check16__10__actual;
    __Vtask_instruction_memory_tb__DOT__check16__10__actual = 0;
    // Body
    instruction_memory_tb__DOT__pass_count = 0U;
    instruction_memory_tb__DOT__fail_count = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                         46);
    instruction_memory_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000020U, instruction_memory_tb__DOT__i)) {
        vlSelfRef.instruction_memory_tb__DOT__address0 
            = (0x0000ffffU & instruction_memory_tb__DOT__i);
        vlSelfRef.instruction_memory_tb__DOT__address1 = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                             54);
        vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__0__name = "sequential_read_port0"s;
        __Vtask_instruction_memory_tb__DOT__check16__0__actual 
            = vlSelfRef.instruction_memory_tb__DOT__inst_out0;
        __Vtask_instruction_memory_tb__DOT__check16__0__expected 
            = (0x0000ffffU & instruction_memory_tb__DOT__i);
        if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__0__expected) 
             == (IData)(__Vtask_instruction_memory_tb__DOT__check16__0__actual))) {
            VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__0__name),
                         16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__0__actual));
            instruction_memory_tb__DOT__pass_count 
                = ((IData)(1U) + instruction_memory_tb__DOT__pass_count);
        } else {
            VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__0__name),
                         16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__0__expected),
                         16,__Vtask_instruction_memory_tb__DOT__check16__0__actual);
            instruction_memory_tb__DOT__fail_count 
                = ((IData)(1U) + instruction_memory_tb__DOT__fail_count);
        }
        instruction_memory_tb__DOT__i = ((IData)(1U) 
                                         + instruction_memory_tb__DOT__i);
    }
    vlSelfRef.instruction_memory_tb__DOT__address0 = 5U;
    vlSelfRef.instruction_memory_tb__DOT__address1 = 0x000aU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                         65);
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__1__name = "dual_port_addr5_port0"s;
    __Vtask_instruction_memory_tb__DOT__check16__1__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out0;
    __Vtask_instruction_memory_tb__DOT__check16__1__expected = 5U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__1__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__1__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__1__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__1__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__1__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__1__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__1__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__2__name = "dual_port_addr10_port1"s;
    __Vtask_instruction_memory_tb__DOT__check16__2__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out1;
    __Vtask_instruction_memory_tb__DOT__check16__2__expected = 0x000aU;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__2__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__2__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__2__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__2__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__2__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__2__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__2__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.instruction_memory_tb__DOT__address0 = 7U;
    vlSelfRef.instruction_memory_tb__DOT__address1 = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                         75);
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__3__name = "same_addr_port0"s;
    __Vtask_instruction_memory_tb__DOT__check16__3__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out0;
    __Vtask_instruction_memory_tb__DOT__check16__3__expected = 7U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__3__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__3__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__3__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__3__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__3__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__3__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__3__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__4__name = "same_addr_port1_matches_port0"s;
    __Vtask_instruction_memory_tb__DOT__check16__4__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out1;
    __Vtask_instruction_memory_tb__DOT__check16__4__expected = 7U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__4__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__4__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__4__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__4__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__4__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__4__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__4__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.instruction_memory_tb__DOT__address0 = 0U;
    vlSelfRef.instruction_memory_tb__DOT__address1 = 0x001fU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                         84);
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__5__name = "boundary_addr0_port0"s;
    __Vtask_instruction_memory_tb__DOT__check16__5__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out0;
    __Vtask_instruction_memory_tb__DOT__check16__5__expected = 0U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__5__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__5__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__5__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__5__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__5__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__5__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__5__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__6__name = "boundary_addr31_port1"s;
    __Vtask_instruction_memory_tb__DOT__check16__6__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out1;
    __Vtask_instruction_memory_tb__DOT__check16__6__expected = 0x001fU;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__6__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__6__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__6__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__6__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__6__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__6__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__6__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.instruction_memory_tb__DOT__address0 = 3U;
    vlSelfRef.instruction_memory_tb__DOT__address1 = 0x0014U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                         93);
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__7__name = "port_independence_addr3"s;
    __Vtask_instruction_memory_tb__DOT__check16__7__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out0;
    __Vtask_instruction_memory_tb__DOT__check16__7__expected = 3U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__7__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__7__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__7__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__7__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__7__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__7__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__7__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__8__name = "port_independence_addr20"s;
    __Vtask_instruction_memory_tb__DOT__check16__8__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out1;
    __Vtask_instruction_memory_tb__DOT__check16__8__expected = 0x0014U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__8__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__8__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__8__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__8__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__8__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__8__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__8__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.instruction_memory_tb__DOT__address0 = 0x000fU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "/home/mark/sev3/testbenches/instruction_memory_tb.sv", 
                                         98);
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__9__name = "port0_update_no_affect_port1_port0"s;
    __Vtask_instruction_memory_tb__DOT__check16__9__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out0;
    __Vtask_instruction_memory_tb__DOT__check16__9__expected = 0x000fU;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__9__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__9__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__9__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__9__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__9__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__9__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__9__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__10__name = "port0_update_no_affect_port1_port1"s;
    __Vtask_instruction_memory_tb__DOT__check16__10__actual 
        = vlSelfRef.instruction_memory_tb__DOT__inst_out1;
    __Vtask_instruction_memory_tb__DOT__check16__10__expected = 0x0014U;
    if (((IData)(__Vtask_instruction_memory_tb__DOT__check16__10__expected) 
         == (IData)(__Vtask_instruction_memory_tb__DOT__check16__10__actual))) {
        VL_WRITEF_NX("PASS [%0t] %@ | got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__10__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__10__actual));
        instruction_memory_tb__DOT__pass_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL [%0t] %@ | expected=0x%04x got=0x%04x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,-1,
                     &(vlSelfRef.__Vtask_instruction_memory_tb__DOT__check16__10__name),
                     16,(IData)(__Vtask_instruction_memory_tb__DOT__check16__10__expected),
                     16,__Vtask_instruction_memory_tb__DOT__check16__10__actual);
        instruction_memory_tb__DOT__fail_count = ((IData)(1U) 
                                                  + instruction_memory_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- instruction_memory_tb: PASS=%0d FAIL=%0d ---\n\n",0,
                 32,instruction_memory_tb__DOT__pass_count,
                 32,instruction_memory_tb__DOT__fail_count);
    VL_FINISH_MT("/home/mark/sev3/testbenches/instruction_memory_tb.sv", 103, "");
    co_return;
}

void Vinstruction_memory_tb___024root___eval_triggers_vec__act(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_triggers_vec__act\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vinstruction_memory_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___trigger_anySet__act\n"); );
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

void Vinstruction_memory_tb___024root___act_sequent__TOP__0(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___act_sequent__TOP__0\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instruction_memory_tb__DOT__inst_out0 
        = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
        [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address0))];
    vlSelfRef.instruction_memory_tb__DOT__inst_out1 
        = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
        [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address1))];
}

void Vinstruction_memory_tb___024root___eval_act(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_act\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.instruction_memory_tb__DOT__inst_out0 
            = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
            [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address0))];
        vlSelfRef.instruction_memory_tb__DOT__inst_out1 
            = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
            [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address1))];
    }
}

void Vinstruction_memory_tb___024root___eval_nba(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_nba\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.instruction_memory_tb__DOT__inst_out0 
            = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
            [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address0))];
        vlSelfRef.instruction_memory_tb__DOT__inst_out1 
            = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
            [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address1))];
    }
}

void Vinstruction_memory_tb___024root___timing_resume(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___timing_resume\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vinstruction_memory_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vinstruction_memory_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vinstruction_memory_tb___024root___eval_phase__act(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_phase__act\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vinstruction_memory_tb___024root___eval_triggers_vec__act(vlSelf);
    Vinstruction_memory_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinstruction_memory_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vinstruction_memory_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vinstruction_memory_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vinstruction_memory_tb___024root___timing_resume(vlSelf);
        Vinstruction_memory_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vinstruction_memory_tb___024root___eval_phase__inact(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_phase__inact\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/mark/sev3/testbenches/instruction_memory_tb.sv", 12, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vinstruction_memory_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vinstruction_memory_tb___024root___eval_phase__nba(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_phase__nba\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vinstruction_memory_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vinstruction_memory_tb___024root___eval_nba(vlSelf);
        Vinstruction_memory_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vinstruction_memory_tb___024root___eval(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vinstruction_memory_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/instruction_memory_tb.sv", 12, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/mark/sev3/testbenches/instruction_memory_tb.sv", 12, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vinstruction_memory_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/mark/sev3/testbenches/instruction_memory_tb.sv", 12, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vinstruction_memory_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vinstruction_memory_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vinstruction_memory_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vinstruction_memory_tb___024root___eval_debug_assertions(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_debug_assertions\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
