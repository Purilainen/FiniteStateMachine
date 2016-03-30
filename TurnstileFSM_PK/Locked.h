#ifndef LOCKED_H
#define LOCKED_H

#include "TurnstileStates.h"

class TurnstileFSM;
class Locked : public TurnstileStates
{
public:
    void Coin();
    void Pass();

    Locked(TurnstileFSM* FSM) : TurnstileStates(FSM) { m_FSM = FSM; }
    ~Locked();
private:
    TurnstileFSM* m_FSM;
};



#endif