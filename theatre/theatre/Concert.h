#pragma once
#include "IEvent.h"
class Concert : virtual public IEvent {
public:
	Concert();
	Concert(std::string title, int ageLimit, std::string instruments);
	Concert(std::string instruments);
	~Concert();
	void setInstruments(std::string instruments);
	std::string getInstruments();
	void displayEvent();
private:
	std::string _instruments;
};






