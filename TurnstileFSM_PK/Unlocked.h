#ifndef UNLOCKED_H
#define UNLOCKED_H

#include "TurnstileStates.h"

class TurnstileFSM;
class Unlocked : public TurnstileStates
{
public:
    void Coin();
    void Pass();

    Unlocked(TurnstileFSM* FSM) : TurnstileStates(FSM) { m_FSM = FSM; }
    ~Unlocked();
private:
    TurnstileFSM* m_FSM;
};



#endif