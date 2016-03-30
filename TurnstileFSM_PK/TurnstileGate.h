#ifndef TURNSTILEGATE_H
#define TURNSTILEGATE_H

#include <iostream>

class TurnstileGate
{
public:

    void Lock() { std::cout << "Locked" << std::endl; }
    void Unlock(){ std::cout << "Unlocked" << std::endl; }

    void Alarm()
    {
        alarm = true;
        std::cout << "Alarm off" << std::endl; 
    }

    void ResetAlarm()
    {
        alarm = false;
        std::cout << "Alarm reseted" << std::endl; 
    }

    void ThankYou(){ std::cout << "Thank you, you may pass." << std::endl; }
    void ThankYouOff();

    TurnstileGate();
    ~TurnstileGate();

private:
    bool alarm = false;
};

#endif TURNSTILEGATE_H