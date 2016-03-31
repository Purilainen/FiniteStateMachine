#ifndef LOCKED_H
#define LOCKED_H

#include "TurnstileStates.h"
#include <iostream>
// COPIRAIT PYRY KOSOLA
// TTV14SP
class TurnstileFSM;
class Locked : public TurnstileStates
{
public:
    void Coin() override;
    void Pass() override;

    Locked(TurnstileFSM* FSM) : TurnstileStates(FSM) 
    {
        m_FSM = FSM;
        std::cout << "You have entered Locked state" << std::endl;
    }
    ~Locked();
private:
    TurnstileFSM* m_FSM;
};



#endif