// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinstruction_memory_tb__pch.h"

//============================================================
// Constructors

Vinstruction_memory_tb::Vinstruction_memory_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinstruction_memory_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vinstruction_memory_tb::Vinstruction_memory_tb(const char* _vcname__)
    : Vinstruction_memory_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinstruction_memory_tb::~Vinstruction_memory_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinstruction_memory_tb___024root___eval_debug_assertions(Vinstruction_memory_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vinstruction_memory_tb___024root___eval_static(Vinstruction_memory_tb___024root* vlSelf);
void Vinstruction_memory_tb___024root___eval_initial(Vinstruction_memory_tb___024root* vlSelf);
void Vinstruction_memory_tb___024root___eval_settle(Vinstruction_memory_tb___024root* vlSelf);
void Vinstruction_memory_tb___024root___eval(Vinstruction_memory_tb___024root* vlSelf);

void Vinstruction_memory_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinstruction_memory_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinstruction_memory_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinstruction_memory_tb___024root___eval_static(&(vlSymsp->TOP));
        Vinstruction_memory_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vinstruction_memory_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinstruction_memory_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinstruction_memory_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vinstruction_memory_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vinstruction_memory_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinstruction_memory_tb___024root___eval_final(Vinstruction_memory_tb___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_memory_tb::final() {
    Vinstruction_memory_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinstruction_memory_tb::hierName() const { return vlSymsp->name(); }
const char* Vinstruction_memory_tb::modelName() const { return "Vinstruction_memory_tb"; }
unsigned Vinstruction_memory_tb::threads() const { return 1; }
void Vinstruction_memory_tb::prepareClone() const { contextp()->prepareClone(); }
void Vinstruction_memory_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
