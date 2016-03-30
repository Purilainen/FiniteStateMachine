#ifndef TURNSTILESTATES_H
#define TURNSTILESTATES_H


#include "TurnstileFSM.h"

class TurnstileFSM;
class TurnstileStates
{
public:

    void Coin();
    void Pass();
    TurnstileFSM* getFSM() { return m_FSM; }

    TurnstileStates(TurnstileFSM* tfsm);

    ~TurnstileStates();

private:
    TurnstileFSM* m_FSM;
    TurnstileStates();
};

#endif TURNSTILESTATES_H