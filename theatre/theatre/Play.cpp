#include "Play.h"

Play::Play() {
    setTitle("undefined");
    setAgeLimit(0);
    this->_theme = "undefined";
}

Play::Play(std::string title, int ageLimit, std::string theme) :IEvent(title, ageLimit), _theme(theme) {}
Play::Play(std::string theme) : _theme(theme) {}
Play::~Play() {};


void Play::setTheme(std::string theme) {
    this->_theme = theme;
}

std::string Play::getTheme() {
    return _theme;
}
void Play::displayEvent() {
    IEvent::displayEvent();
    std::cout << "Theme: " << _theme << std::endl;
}
