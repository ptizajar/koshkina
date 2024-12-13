#pragma once
#include <iostream>
#include "Snack.h"

class Slot {
public:
    Slot();
    Slot(Snack** snacks, int quantitySnacks);
    ~Slot();

    virtual void display();


    void setSnacks(Snack** snacks);
    Snack** getSnacks();
    void setQuantitySnacks(int quantitySnacks);
    int getQuantitySnacks();

    bool remove(Snack* snack);


private:
    Snack** _snacks;
    int _quantitySnacks;

};






