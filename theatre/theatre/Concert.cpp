#include "Concert.h"

Concert::Concert() {
    setTitle("undefined");
    setAgeLimit(0);
    this->_instruments = "undefined";
}

Concert::Concert(std::string title, int ageLimit, std::string instruments) :IEvent(title, ageLimit), _instruments(instruments) {}
Concert::Concert(std::string instruments) : _instruments(instruments) {}
Concert::~Concert() {};


void Concert::setInstruments(std::string instruments) {
    this->_instruments = instruments;
}

std::string Concert::getInstruments() {
    return _instruments;
}
void Concert::displayEvent() {
    IEvent::displayEvent();
    std::cout << "Instruments: " << _instruments << std::endl;
}
