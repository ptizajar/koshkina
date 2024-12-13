#include <iostream>
#include <string>
#include "enum.h"
#pragma once

class Human {
public:
    Human();
    Human(std::string name, std::string surname, int age, int weight, int height);

    ~Human();

    Human operator++();
    Human operator--();
    Human operator++(int);
    Human operator--(int);
    bool operator<(Human other);
    bool operator>(Human other);
    friend std::ostream& operator<<(std::ostream& output, Human t);

    void setName(std::string name);
    std::string getName();
    void setSurname(std::string surname);
    std::string getSurname();
    void setAge(int age);
    int getAge();
    void setWeight(int weight);
    int getWeight();
    void setHeight(int height);
    int getHeight();
    virtual void read();
    virtual void writeToFile();
    virtual void imt();
    virtual void yearBorn();
    virtual void display();

private:
    std::string _name;
    std::string _surname;
    int  _age;
    int _weight;
    int _height;

};


