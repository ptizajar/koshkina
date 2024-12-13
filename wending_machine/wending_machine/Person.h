#pragma once
#include <iostream>
#include "Slot.h"
#include "Snack.h"
#include "Machine.h"

class Person {
public:
    Person();
    Person(int money);
    ~Person();

    virtual void display();

    void setMoney(int money);
    int getMoney();
    void buy(Machine* machine,Slot* slot,Snack *snack);


private:
    int _money;

};







