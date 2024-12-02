#pragma once
#include "IPerson.h"
#include "IEvent.h"
class Client : public IPerson {
public:
	Client();
	Client(std::string name, std::string surname, int age, IEvent** taken, int quantity);
	~Client();
	IEvent** getTaken();
	void append(IEvent* ticket);
	void setQuantity(int quantity);
	int getQuantity();
	void displayPerson();
private:
	IEvent** _taken;
	int _quantity;
};





