#pragma once
#include "IEvent.h"
class Window {
public:
	Window();
	Window(IEvent** tickets, int quantityAvailable);
	~Window();
	IEvent** getTickets();
	bool remove(IEvent* ticket);
	void setQuantityAvailable(int quantityAvailable);
	int getQuantityAvailable();
	void displayWindow();
private:
	IEvent** _tickets;
	int _quantityAvailable;
};





