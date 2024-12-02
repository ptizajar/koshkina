#pragma once
#include <iostream>

class IPerson {
public:
    IPerson();
    IPerson(std::string name, std::string surname, int age);

    virtual ~IPerson();

    virtual void displayPerson() = 0;


    void setName(std::string name);
    std::string getName();
    void setSurname(std::string surname);
    std::string getSurname();
    void setAge(int age);
    int getAge();

private:
    std::string _name;
    std::string _surname;
    int _age;
};



