#include <iostream>
#include <string>
#include "myenum.h"
#pragma once

class Car {
public:
    Car();
    Car(std::string brand, std::string color, std::string type, float volume, int mileage);
    Car(std::string brand, std::string color, std::string type, float volume);
    Car(std::string brand, std::string color, std::string type);
    Car(std::string brand, std::string color);
    Car(std::string brand);

    ~Car();

    Car operator++();
    Car operator--();
    Car operator++(int);
    Car operator--(int);
    bool operator<(Car other);
    bool operator>(Car other);
    friend std::ostream& operator<<(std::ostream& output, Car t);

    void setBrand(std::string brand);
    std::string getBrand();
    void setColor(std::string color);
    std::string getColor();
    void setType(std::string type);
    std::string getType();
    void setVolume(float volume);
    float getVolume();
    void setMileage(int mileage);
    int getMileage();


    void lessMileage(int);
    void consumption();
    void display();

private:
    std::string _brand;
    std::string _color;
    std::string _type;
    float _volume;
    int _mileage;

};


