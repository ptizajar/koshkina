#pragma once
#include <iostream>

class IPerson {
public:
    IPerson();
    IPerson(std::string name, std::string surname);
    virtual ~IPerson();

    virtual void displayPerson() = 0;


    void setName(std::string name);
    std::string getName();
    void setSurname(std::string surname);
    std::string getSurname();


private:
    std::string _name;
    std::string _surname;

};




