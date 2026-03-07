// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vthread_scheduler_tb__pch.h"

//============================================================
// Constructors

Vthread_scheduler_tb::Vthread_scheduler_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vthread_scheduler_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vthread_scheduler_tb::Vthread_scheduler_tb(const char* _vcname__)
    : Vthread_scheduler_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vthread_scheduler_tb::~Vthread_scheduler_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vthread_scheduler_tb___024root___eval_debug_assertions(Vthread_scheduler_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vthread_scheduler_tb___024root___eval_static(Vthread_scheduler_tb___024root* vlSelf);
void Vthread_scheduler_tb___024root___eval_initial(Vthread_scheduler_tb___024root* vlSelf);
void Vthread_scheduler_tb___024root___eval_settle(Vthread_scheduler_tb___024root* vlSelf);
void Vthread_scheduler_tb___024root___eval(Vthread_scheduler_tb___024root* vlSelf);

void Vthread_scheduler_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vthread_scheduler_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vthread_scheduler_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vthread_scheduler_tb___024root___eval_static(&(vlSymsp->TOP));
        Vthread_scheduler_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vthread_scheduler_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vthread_scheduler_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vthread_scheduler_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vthread_scheduler_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vthread_scheduler_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vthread_scheduler_tb___024root___eval_final(Vthread_scheduler_tb___024root* vlSelf);

VL_ATTR_COLD void Vthread_scheduler_tb::final() {
    Vthread_scheduler_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vthread_scheduler_tb::hierName() const { return vlSymsp->name(); }
const char* Vthread_scheduler_tb::modelName() const { return "Vthread_scheduler_tb"; }
unsigned Vthread_scheduler_tb::threads() const { return 1; }
void Vthread_scheduler_tb::prepareClone() const { contextp()->prepareClone(); }
void Vthread_scheduler_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
