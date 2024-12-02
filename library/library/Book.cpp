#include "Book.h"

Book::Book() {
    setTitle("undefined");
    setAgeLimit(0);
    this->_genre = "undefined";
}

Book::Book(std::string title, int ageLimit, std::string genre) :IPrint(title, ageLimit), _genre(genre) {}
Book::Book(std::string genre) : _genre(genre) {}
Book::~Book() {};


void Book::setGenre(std::string genre) {
    this->_genre = genre;
}

std::string Book::getGenre() {
    return _genre;
}
void Book::displayPrint() {
    IPrint::displayPrint();
    std::cout << "Genre: " << _genre << std::endl;
}
