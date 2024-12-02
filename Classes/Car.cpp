#include <iostream>
#include "Car.h"
using namespace std;
using namespace age;

Car Car::operator++() {
    _volume += 10;
    return *this;
}

Car Car::operator--() {
    if (_volume > 10) {
        _volume -= 10;
        return *this;
    }

    else std::cout << "Volume is to small" << std::endl;
}

Car Car::operator++(int) {
    Car t(*this);
    ++(*this);
    return t;
}

Car Car::operator--(int) {
    Car t(*this);
    --(*this);
    return t;
}

bool Car::operator<(Car other) {
    return this->_volume < other._volume;
}

bool Car::operator>(Car other) {
    return this->_volume > other._volume;
}

std::ostream& operator<<(std::ostream& output, Car t) {
    output << "Brand: " << t._brand << std::endl
        << "Color: " << t._color << std::endl
        << "Type: " << t._type << std::endl
        << "Volume: " << t._volume << std::endl
        << "Mileage: " << t._mileage << std::endl;
    return output;
}



void Car::consumption() {
    cout << "Consuption " << _volume / _mileage * 100 << endl;
}

void Car::lessMileage(int less) {
    if (less <= _mileage) {
        _mileage = _mileage - less;
    }
    else cout << "New mileage " << _mileage << endl;
}


void Car::display() {
    cout << endl << "Brand " << _brand << endl;
    cout << "Color " << _color << endl;
    cout << "Type " << _type << endl;
    cout << "Volume " << _volume << endl;
    cout << "Mileage " << _mileage << endl;
}

Car::Car() {
    this->_brand = "undefined";
    this->_color = "undefined";
    this->_type = "undefined";
    this->_volume = 0;
    this->_mileage = 0;
}

Car::Car(std::string brand, std::string color, std::string type, float volume, int mileage) :_brand(correctAlpha(brand)), _color(correctAlpha(color)), _type(correctAlpha(color)), _volume(correctCount(volume)), _mileage(correctCount(mileage)) {}

Car::Car(std::string brand, std::string color, std::string type, float volume) : Car(brand, color, type, volume, 0) {}

Car::Car(std::string brand, std::string color, std::string type) : Car(brand, color, type, 0, 0) {}

Car::Car(std::string brand, std::string color) : Car(brand, color, "undefined", 0, 0) {}

Car::Car(std::string brand) : Car(brand, "undefined", "undefined", 0, 0) {}

Car::~Car() {}


void Car::setBrand(std::string  brand) {
    this->_brand = correctAlpha(brand);
}

std::string  Car::getBrand() {
    return _brand;
}
void Car::setColor(std::string  color) {
    this->_color = correctAlpha(color);
}

std::string  Car::getColor() {
    return _color;
}

void Car::setType(std::string  type) {
    this->_type = correctAlpha(type);
}

std::string Car::getType() {
    return _type;
}

void Car::setVolume(float volume) {
    this->_volume = correctCount(volume);
}

float Car::getVolume() {
    return _volume;
}

void Car::setMileage(int mileage) {
    this->_mileage = correctCount(mileage);

}

int Car::getMileage() {
    return _mileage;
}
