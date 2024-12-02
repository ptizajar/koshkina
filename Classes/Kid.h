#pragma once
#include "Human.h"
class Kid :public Human {
public:
	Kid();
	Kid(std::string name, std::string surname, int age, int weight, int height, std::string school);
	Kid(std::string name, std::string surname, int age, int weight, int height);
	Kid(std::string name, std::string surname, int age, int weight);
	Kid(std::string name, std::string surname, int age);
	Kid(std::string name, std::string surname);
	Kid(std::string name);
	void setSchool(std::string school);
	std::string getSchool();
	void displayKid();
private:
	std::string _school;
};
