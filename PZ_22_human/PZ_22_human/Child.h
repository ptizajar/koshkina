#pragma once
#include "Human.h"
class Child :virtual public Human {
public:
	Child();
	Child(std::string name, std::string surname, int age, int weight, int height, std::string school);
	Child(std::string school);
	void setSchool(std::string school);
	std::string getSchool();
	virtual void display();
	void writeToFile();
	void read();
	Child operator++();
	Child operator--();
	Child operator++(int);
	Child operator--(int);
	bool operator<(Child other);
	bool operator>(Child other);
	friend std::ostream& operator<<(std::ostream& output, Child t);
private:
	std::string _school;
};

