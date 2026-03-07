// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstruction_memory_tb.h for the primary calling header

#include "Vinstruction_memory_tb__pch.h"

VL_ATTR_COLD void Vinstruction_memory_tb___024root___eval_static(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_static\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vinstruction_memory_tb___024root___eval_initial__TOP(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_initial__TOP\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(false, 16, 256, 0, "im_init.txt"s,  &(vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vinstruction_memory_tb___024root___eval_final(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_final\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vinstruction_memory_tb___024root___eval_phase__stl(Vinstruction_memory_tb___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_memory_tb___024root___eval_settle(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_settle\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vinstruction_memory_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/mark/sev3/testbenches/instruction_memory_tb.sv", 12, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vinstruction_memory_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vinstruction_memory_tb___024root___eval_triggers_vec__stl(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_triggers_vec__stl\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vinstruction_memory_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vinstruction_memory_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vinstruction_memory_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vinstruction_memory_tb___024root___eval_stl(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_stl\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.instruction_memory_tb__DOT__inst_out0 
            = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
            [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address0))];
        vlSelfRef.instruction_memory_tb__DOT__inst_out1 
            = vlSelfRef.instruction_memory_tb__DOT___DUT___DOT__inst_mem
            [(0x000000ffU & (IData)(vlSelfRef.instruction_memory_tb__DOT__address1))];
    }
}

VL_ATTR_COLD bool Vinstruction_memory_tb___024root___eval_phase__stl(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___eval_phase__stl\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vinstruction_memory_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinstruction_memory_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vinstruction_memory_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vinstruction_memory_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vinstruction_memory_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinstruction_memory_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vinstruction_memory_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinstruction_memory_tb___024root___ctor_var_reset(Vinstruction_memory_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory_tb___024root___ctor_var_reset\n"); );
    Vinstruction_memory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->instruction_memory_tb__DOT__address0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3797149084859071481ull);
    vlSelf->instruction_memory_tb__DOT__address1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13460373772091034223ull);
    vlSelf->instruction_memory_tb__DOT__inst_out0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9127218344862740080ull);
    vlSelf->instruction_memory_tb__DOT__inst_out1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8271952973793611741ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->instruction_memory_tb__DOT___DUT___DOT__inst_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15379582282364037999ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
