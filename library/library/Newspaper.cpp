#include "Newspaper.h"

Newspaper::Newspaper() {
    setTitle("undefined");
    setAgeLimit(0);
    this->_publication = "undefined";
}

Newspaper::Newspaper(std::string title, int ageLimit, std::string publication) :IPrint(title, ageLimit), _publication(publication) {}
Newspaper::Newspaper(std::string publication) : _publication(publication) {}
Newspaper::~Newspaper() {};


void Newspaper::setPublication(std::string publication) {
    this->_publication = publication;
}

std::string Newspaper::getPublication() {
    return _publication;
}
void Newspaper::displayPrint() {
    IPrint::displayPrint();
    std::cout << "Publication date: " << _publication << std::endl;
}
