#ifndef VIOLATION_H
#define VIOLATION_H

#include "TurnstileStates.h"

class TurnstileFSM;
class Violation : public TurnstileStates
{
public:
    void Coin();
    void Pass();
    void Reset();
    void Ready();

    Violation(TurnstileFSM* FSM) : TurnstileStates(FSM) { m_FSM = FSM; }
    ~Violation();

private:
    TurnstileFSM* m_FSM;
};

#endif