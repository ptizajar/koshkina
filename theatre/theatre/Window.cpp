#include "Window.h"

Window::Window() {
    this->_tickets = nullptr;
    this->_quantityAvailable = 0;
}

Window::Window(IEvent** tickets, int quantityAvailable) : _tickets(tickets), _quantityAvailable(quantityAvailable) {}
Window::~Window() {};


void Window::setQuantityAvailable(int quantityAvailable) {
    if (quantityAvailable >= 0) {
        this->_quantityAvailable = quantityAvailable;
    }
    else std::cout << "Wrong value" << std::endl;
}

int Window::getQuantityAvailable() {
    return _quantityAvailable;
}


bool Window::remove(IEvent* ticket) {
    if (this->_tickets == nullptr) {
        return false;
    }
    else {
        int indBack = -1;
        for (int i = 0; i < this->_quantityAvailable; i++) {
            if (this->_tickets[i]->getTitle() == ticket->getTitle()) {
                indBack = i;
                break;
            }
        }
        if (indBack == -1) {
            return false;
        }
        else {
            IEvent** p = new IEvent * [(this->_quantityAvailable) - 1];
            int newI = 0;
            for (int i = 0; i < this->_quantityAvailable; i++) {
                if (i != indBack) {
                    p[newI++] = this->_tickets[i];
                }
            }
            this->_tickets = p;
            this->_quantityAvailable--;
            return true;
        }
    }
}

IEvent** Window::getTickets() {
    return _tickets;
}

void Window::displayWindow() {
    if (_tickets == nullptr) {
        std::cout << "Nothing here" << std::endl;
    }
    else {
        std::cout << "Tickets: " << std::endl;
        for (int i = 0; i < _quantityAvailable; i++) {
            std::cout << _tickets[i]->getTitle() << std::endl;
        }
        std::cout << "Tickets quantity: " << getQuantityAvailable() << std::endl;
    }
}
