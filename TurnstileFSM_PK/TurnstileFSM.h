#ifndef TURNSTILEFSM_H
#define TURNSTILEFSM_H
// COPIRAIT PYRY KOSOLA
// TTV14SP
#include "TurnstileStates.h"
#include "TurnstileGate.h"
#include <iostream>

class TurnstileStates;
class TurnstileFSM
{
public:

    TurnstileFSM(TurnstileGate* gate);
    ~TurnstileFSM();

    void Coin();
    void Pass();
    void Reset();
    void Ready();
    void SetState(TurnstileStates* ts);
    TurnstileGate* GetGate(){ return m_gate; }

private:
    TurnstileStates* m_currentstate;
    TurnstileGate* m_gate;
};

#endif