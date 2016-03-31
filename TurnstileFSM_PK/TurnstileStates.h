#ifndef TURNSTILESTATES_H
#define TURNSTILESTATES_H

// COPIRAIT PYRY KOSOLA
// TTV14SP
#include "TurnstileFSM.h"


class TurnstileFSM;
class TurnstileStates
{
public:

    virtual void Coin();
    virtual void Pass();
    virtual void Ready();
    virtual void Reset();

    TurnstileFSM* getFSM() { return m_FSM; }

    TurnstileStates(TurnstileFSM* tfsm);

    ~TurnstileStates();
    
private:
    TurnstileFSM* m_FSM;
    TurnstileStates();
};

#endif TURNSTILESTATES_H