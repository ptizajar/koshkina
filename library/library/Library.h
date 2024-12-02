#pragma once
#include "Bookcase.h"
#include "Employee.h"
#include "Client.h"
class Library {
public:
	Library();
	Library(Bookcase** bookcases, int quantityBookcases,Employee** stuff,int quantityStuff,Client** clients,int quantityClients);
	~Library();
	Bookcase** getBookcases();
	void setQuantityBookcases(int quantityBookcases);
	int getQuantityBookcases();
	Employee** getStuff();
	Client** getClients();
	void give(IPrint* print,Client* client);
	void turnBack(IPrint* print,Client* client);
	//void displayLibrary();
private:
	Bookcase** _bookcases;
	int _quantityBookcases;
	Employee** _stuff;
	int _quantityStuff;
	Client** _clients;
	int _quantityClients;
};




