#pragma once
#include <iostream>
#include "Slot.h"
#include"Buyer.h"

class Machine {
public:
    Machine();
    Machine(Slot** slots, int quantitySlots,double money);
    ~Machine();

    virtual void display();


    void setSlots(Slot** slots);
    Slot** getSlots();
    void setQuantitySlots(int quantitySlots);
    int getQuantitySlots();
    void setMoney(double money);
    double getMoney();

    void add(Slot* slot);
    void sell(Snack* snack, Buyer* buyer);
    int emptySlots();


private:
    Slot** _slots;
    int _quantitySlots;
    double _money;

};







