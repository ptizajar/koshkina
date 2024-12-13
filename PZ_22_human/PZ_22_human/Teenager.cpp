#include "Teenager.h"
#include <fstream>
#include <ostream>
Teenager::Teenager(std::string name, std::string surname,  int age, int weight,int height, std::string school, std::string job) :Human(name, surname, age, weight,height), Child(school), Adult(job) {};
Teenager::Teenager() :Teenager("undefined", "undefined", 0, 0, 0, "undefined", "undefined") {};
Teenager::~Teenager() {};

Teenager Teenager::operator++() {
    this->setHeight(this->getHeight() + 10);
    return *this;
}

Teenager Teenager::operator--() {
    if (this->getHeight() > 10) {
        this->setHeight(this->getHeight() - 10);
        return *this;
    }

    else std::cout << "Height is to small" << std::endl;
    return *this;
}

Teenager Teenager::operator++(int) {
    Teenager t(*this);
    ++(*this);
    return t;
}

Teenager Teenager::operator--(int) {
    Teenager t(*this);
    --(*this);
    return t;
}

bool Teenager::operator<(Teenager other) {
    return this->getHeight() < other.getHeight();
}

bool Teenager::operator>(Teenager other) {
    return this->getHeight() > other.getHeight();
}

std::ostream& operator<<(std::ostream& output, Teenager t) {
    output << "Name: " << t.getName() << std::endl
        << "Surname: " << t.getSurname() << std::endl
        << "Age: " << t.getAge() << std::endl
        << "Weight: " << t.getWeight() << std::endl
        << "Height: " << t.getHeight() << std::endl
        << "School: " << t.getSchool() << std::endl
        << "Job: " << t.getJob() << std::endl;
    return output;
}


void Teenager::read() {
    Human::read();
    std::cout << "Enter school: ";
    std::string humanSchool;
    std::cin >> humanSchool;
    setSchool(humanSchool);
    std::cout << "Enter job: ";
    std::string humanJob;
    std::cin >> humanJob;
    setJob(humanJob);
}
void Teenager::display() {
    Human::display();
    std::cout << "School: " << getSchool() << std::endl
        << "Job: " << getJob() << std::endl;
}
void Teenager::writeToFile() {
    std::ofstream out;
    out.open("Human.txt", std::ios::app);
    if (out.is_open()) {
        out << "Name: " << getName() << std::endl
            << "Surname: " << getSurname() << std::endl
            << "Age: " << getAge() << std::endl
            << "Weight: " << getWeight() << std::endl
            << "Height: " << getHeight() << std::endl
            << "School: " << getSchool() << std::endl
            << "Job: " << getJob() << std::endl;
    }
    out.close();

}