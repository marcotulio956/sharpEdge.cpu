// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_memory_tb__pch.h"

//============================================================
// Constructors

Vdata_memory_tb::Vdata_memory_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_memory_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdata_memory_tb::Vdata_memory_tb(const char* _vcname__)
    : Vdata_memory_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_memory_tb::~Vdata_memory_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_memory_tb___024root___eval_debug_assertions(Vdata_memory_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_memory_tb___024root___eval_static(Vdata_memory_tb___024root* vlSelf);
void Vdata_memory_tb___024root___eval_initial(Vdata_memory_tb___024root* vlSelf);
void Vdata_memory_tb___024root___eval_settle(Vdata_memory_tb___024root* vlSelf);
void Vdata_memory_tb___024root___eval(Vdata_memory_tb___024root* vlSelf);

void Vdata_memory_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_memory_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_memory_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_memory_tb___024root___eval_static(&(vlSymsp->TOP));
        Vdata_memory_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_memory_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_memory_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_memory_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdata_memory_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdata_memory_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_memory_tb___024root___eval_final(Vdata_memory_tb___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory_tb::final() {
    Vdata_memory_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_memory_tb::hierName() const { return vlSymsp->name(); }
const char* Vdata_memory_tb::modelName() const { return "Vdata_memory_tb"; }
unsigned Vdata_memory_tb::threads() const { return 1; }
void Vdata_memory_tb::prepareClone() const { contextp()->prepareClone(); }
void Vdata_memory_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
