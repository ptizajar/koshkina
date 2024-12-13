#pragma once
#include <iostream>
#include "Slot.h"
using namespace std;


class Machine {
public:
    Machine();
    Machine(int quantity, int emptySlots, int money);
    ~Machine();

    virtual void display();


    void setQuantity(int quantity);
    int getQuantity();
    void setEmptySlots(int emptySlots);
    int getEmptySlots();
    void setMoney(int money);
    int getMoney();

    void addSlot(Slot* slot);


   


private:
    int _quantity;
    int _emptySlots;
    int _money;

};








