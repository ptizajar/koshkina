#pragma once
#include <iostream>

class IPrint {
public:
    IPrint();
    IPrint(std::string title,int ageLimit);
    virtual ~IPrint();

    virtual void displayPrint() = 0;

    void setAgeLimit(int ageLimit);
    int getAgeLimit();
    void setTitle(std::string title);
    std::string getTitle();

private:
    std::string _title; 
    int _ageLimit;  
};



