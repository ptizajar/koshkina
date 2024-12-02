#pragma once
#include "Window.h"
#include "IEmployee.h"
#include "Client.h"
class Theatre {
public:
	Theatre();
	Theatre(Window** Windows, int quantityWindows, IEmployee** stuff, int quantityStuff);
	~Theatre();
	Window** getWindows();
	void setQuantityWindows(int quantityWindows);
	int getQuantityWindows();
	IEmployee** getStuff();
	void sell(IEvent* ticket, Client* client);
	//void displayTheatre();
private:
	Window** _windows;
	int _quantityWindows;
	IEmployee** _stuff;
	int _quantityStuff;
};





