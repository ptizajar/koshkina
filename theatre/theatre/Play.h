#pragma once
#include "IEvent.h"
class Play : virtual public IEvent {
public:
	Play();
	Play(std::string title, int ageLimit, std::string theme);
	Play(std::string theme);
	~Play();
	void setTheme(std::string theme);
	std::string getTheme();
	void displayEvent();
private:
	std::string _theme;
};





