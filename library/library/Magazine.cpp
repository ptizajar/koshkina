#include "Magazine.h"

Magazine::Magazine() {
    setTitle("undefined");
    setAgeLimit(0);
    setGenre("undefined");
    setPublication("undefined");
}

Magazine::Magazine(std::string title, int ageLimit, std::string genre,std::string publication) :IPrint(title, ageLimit), Book(genre),Newspaper(publication) {}
Magazine::~Magazine() {};


void Magazine::displayPrint() {
    IPrint::displayPrint();
    std::cout << "Genre: " << getGenre() << std::endl;
    std::cout << "Publication date: " << getPublication() << std::endl;
}
