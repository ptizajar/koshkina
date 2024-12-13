#pragma once
#include <iostream>

class Snack {
public:
    Snack();
    Snack(std::string name, double price);
    ~Snack();

    virtual void display();


    void setName(std::string name);
    std::string getName();
    void setPrice(double price);
    double getPrice();


private:
    std::string _name;
    double _price;

};





