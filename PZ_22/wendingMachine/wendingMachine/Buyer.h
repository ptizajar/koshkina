#pragma once
#include <iostream>

class Buyer {
public:
    Buyer();
    Buyer(double money);
    ~Buyer();

    virtual void display();

    void setMoney(double money);
    double getMoney();


private:
    double _money;

};






