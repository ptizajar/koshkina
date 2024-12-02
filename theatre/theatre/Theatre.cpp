#include "Theatre.h"
#include "IEmployee.h"
#include "Window.h"
Theatre::Theatre() {
    this->_windows = nullptr;
    this->_quantityWindows = 0;
    this->_stuff = nullptr;
    this->_quantityStuff = 0;
}

Theatre::Theatre(Window** windows, int quantityWindows, IEmployee** stuff, int quantityStuff) : _windows(windows), _quantityWindows(quantityWindows), _stuff(stuff), _quantityStuff(quantityStuff) {}
Theatre::~Theatre() {};

Window** Theatre::getWindows() {
    return _windows;
}
void Theatre::setQuantityWindows(int quantityWindows) {
    if (quantityWindows >= 0) {
        this->_quantityWindows = quantityWindows;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Theatre::getQuantityWindows() {
    return _quantityWindows;
}
IEmployee** Theatre::getStuff() {
    return _stuff;
}

void Theatre::sell(IEvent* ticket, Client* client) {
    if ((ticket->getAgeLimit()) <= (client->getAge())) {
        for (int i = 0; i < _quantityWindows; i++) {
            if (_windows[i]->remove(ticket)) {
                client->append(ticket);
                return;
            }

        }
        std::cout << "No such ticket" << std::endl;
        
    }
    else {
        std::cout << "This client is too young" << std::endl;
    }
}


    

