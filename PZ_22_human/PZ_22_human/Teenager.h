#pragma once
#include "Human.h"
#include "Adult.h"
#include "Child.h"
class Teenager : public Adult, Child
{
public:
	Teenager(std::string name, std::string surname, int age, int weight, int height, std::string school, std::string job);
	Teenager();
	~Teenager();
	Teenager operator++();
	Teenager operator--();
	Teenager operator++(int);
	Teenager operator--(int);
	bool operator<(Teenager other);
	bool operator>(Teenager other);
	friend std::ostream& operator<<(std::ostream& output, Teenager t);
	void display();
	void read();
	void writeToFile();


};
