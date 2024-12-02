#pragma once
#include <iostream>

class IEvent {
public:
    IEvent();
    IEvent(std::string title, int ageLimit);
    virtual ~IEvent();

    virtual void displayEvent() = 0;
   
    void setTitle(std::string title);
    std::string getTitle();
    void setAgeLimit(int ageLimit);
    int getAgeLimit();
  

private:
    std::string _title;
    int _ageLimit;
};




