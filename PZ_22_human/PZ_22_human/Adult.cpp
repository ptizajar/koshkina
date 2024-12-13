#include "Human.h"
#include "Adult.h"
#include "enum.h"
#include <fstream>
Adult::Adult() {
	setName("undefined");
	setSurname("undefined");
	setAge(0);
	setWeight(0);
	setHeight(0);
	this->_job = "undefined";
}

Adult::Adult(std::string name, std::string surname, int age, int weight, int height, std::string job) :Human(name, surname, age, weight, height), _job(age::correctAlpha(job)) {}
Adult::Adult(std::string job) : _job(age::correctAlpha(job)) {}

void Adult::setJob(std::string job) {
	this->_job = age::correctAlpha(job);
}

std::string Adult::getJob() {
	return _job;
}

Adult Adult::operator++() {
    this->setHeight(this->getHeight()+10);
    return *this;
}

Adult Adult::operator--() {
    if (this->getHeight() > 10) {
        this->setHeight(this->getHeight() - 10);
        return *this;
    }

    else std::cout << "Height is to small" << std::endl;
    return *this;
}

Adult Adult::operator++(int) {
    Adult t(*this);
    ++(*this);
    return t;
}

Adult Adult::operator--(int) {
    Adult t(*this);
    --(*this);
    return t;
}

bool Adult::operator<(Adult other) {
    return this->getHeight() < other.getHeight();
}

bool Adult::operator>(Adult other) {
    return this->getHeight() > other.getHeight();
}

std::ostream& operator<<(std::ostream& output, Adult t) {
    output << "Name: " << t.getName() << std::endl
        << "Surname: " << t.getSurname() << std::endl
        << "Age: " << t.getAge() << std::endl
        << "Weight: " << t.getWeight() << std::endl
        << "Height: " << t.getHeight() << std::endl
        << "Job: " << t._job << std::endl;
    return output;
}


void Adult::display() {
	Human::display();
	std::cout << "Job: " << _job << std::endl;
}

void Adult::read() {
    Human::read();
    std::cout << "Enter job ";
    std::string humanJob;
    std::cin >> humanJob;
    setJob(humanJob);

}

void Adult::writeToFile() {
    std::ofstream out;
    out.open("Human.txt", std::ios::app);
    if (out.is_open()) {
        out << "Name: " << getName() << std::endl
            << "Surname: " << getSurname() << std::endl
            << "Age: " << getAge() << std::endl
            << "Weight: " << getWeight() << std::endl
            << "Height: " << getHeight() << std::endl
            << "Job: " << getJob() << std::endl;
    }
    out.close();

}