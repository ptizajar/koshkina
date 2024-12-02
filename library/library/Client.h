#pragma once
#include "Visitor.h"
#include "IPrint.h"
class Client :virtual public Visitor {
public:
	Client();
	Client(std::string name, std::string surname, int age, std::string id,IPrint** taken,int quantity);
	~Client();
	IPrint** getTaken();
	void append(IPrint *print);
	bool remove(IPrint *print);
	void setQuantity(int quantity);
	int getQuantity();
	void displayPerson();
private:
	IPrint** _taken;
	int _quantity;
};




