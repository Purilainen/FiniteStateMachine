#ifndef TURNSTILEFSM_H
#define TURNSTILEFSM_H

#include "TurnstileStates.h"
#include "TurnstileGate.h"

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