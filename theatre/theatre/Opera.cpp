#include "Opera.h"

Opera::Opera() {
    setTitle("undefined");
    setAgeLimit(0);
    setTheme("undefined");
    setInstruments("undefined");
}

Opera::Opera(std::string title, int ageLimit, std::string theme, std::string instruments) :IEvent(title, ageLimit), Play(theme), Concert(instruments) {}
Opera::~Opera() {};


void Opera::displayEvent() {
    IEvent::displayEvent();
    std::cout << "Theme: " << getTheme() << std::endl;
    std::cout << "Instruments: " << getInstruments() << std::endl;
}
