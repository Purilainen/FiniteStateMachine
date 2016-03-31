#ifndef TURNSTILEGATE_H
#define TURNSTILEGATE_H
// COPIRAIT PYRY KOSOLA
// TTV14SP
#include <iostream>
#include <cstdlib>

class TurnstileGate
{
public:

    void Lock() {std::cout << "Locked" << std::endl; }
    void Unlock(){std::cout << "Unlocked" << std::endl; }

    void Alarm()
    { 
        std::cout << "Alarm off" << std::endl; 
    }

    void ResetAlarm()
    {
        std::cout << "Alarm reseted" << std::endl; 
    }

    void ThankYou(){std::cout << "Thank you, you may pass." << std::endl; }
    void ThankYouOff();

    TurnstileGate();
    ~TurnstileGate();

};

#endif TURNSTILEGATE_H