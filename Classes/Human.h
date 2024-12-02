#include <iostream>
#include <string>
#include "myenum.h"
#pragma once

class Human {
public:
    Human();
    Human(std::string name, std::string surname, int age, int weight, int height);
    Human(std::string name, std::string surname, int age, int weight);
    Human(std::string name, std::string surname, int age);
    Human(std::string name, std::string surname);
    Human(std::string name);

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

    void imt();
    void yearBorn(int thisYear);
    void display();
    //void init(const char *newName, const char *newSurname,int newAge,int newWeight,int newHeight);

private:
    std::string _name;
    std::string _surname;
    int  _age;
    int _weight;
    int _height;

};

