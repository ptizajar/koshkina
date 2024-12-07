#pragma once
#include <iostream>
#include "Day.h"

class Week {
public:
    Week();
    Week(Day** days, int quantityDays);
    ~Week();

    void displayWeek();


    void setDays(Day** days);
    Day** getDays();
    void setQuantityDays(int quantityDays);
    int getQuantityDays();


private:
    Day** _days;
    int _quantityDays;

};






