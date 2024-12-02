#pragma once
#include "IEmployee.h"
class Cashier :public IEmployee {
public:
	Cashier();
	Cashier(std::string name, std::string surname, int age, int experience,int cashbox);
	~Cashier();
	void setCashbox(int cashbox);
	int getCashbox();
	void displayPerson();
private:
	int _cashbox;
};




