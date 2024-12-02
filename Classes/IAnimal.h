#include <iostream>
#include "myenum.h"
#pragma once

class IAnimal {
public:
    IAnimal();
    IAnimal(std::string name, std::string species, std::string color, int age, double weight);
    IAnimal(std::string name, std::string species, std::string color, int age);
    IAnimal(std::string name, std::string species, std::string color);
    IAnimal(std::string name, std::string species);
    IAnimal(std::string name);

    virtual ~IAnimal();

    virtual void displayAnimal() = 0;


    void setName(std::string name);
    std::string getName();
    void setSpecies(std::string species);
    std::string getSpecies();
    void setColor(std::string color);
    std::string getColor();
    void setAge(int age);
    int getAge();
    void setWeight(double weight);
    double getWeight();
    void read();
    virtual void writeToFile();
    void newWeight(int);
    void newName(std::string);
   // virtual void displayAnimal();

private:
    std::string _name;
    std::string _species;
    std::string _color;
    int _age;
    double _weight;

};

