#pragma once
#include <iostream>

class Slot {
public:
    Slot();
    Slot(std::string name, int quantity);
    ~Slot();

    virtual void display();


    void setName(std::string name);
    std::string getName();
    void setQuantity(int quantity);
    int getQuantity();
 

private:
    std::string _name;
    int _quantity;

};






