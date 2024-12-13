#pragma once
#include <iostream>

class Snack {
public:
    Snack();
    Snack(std::string name, int cost, int calories);
    ~Snack();

    virtual void display();


    void setName(std::string name);
    std::string getName();
    void setCost(int cost);
    int getCost();
    void setCalories(int calories);
    int getCalories();


private:
    std::string _name;
    int _cost;
    int _calories;

};





