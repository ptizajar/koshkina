#include "Adult.h"
#include "myenum.h"
Adult::Adult() {
	setName("undefined");
	setSurname("undefined");
	setAge(0);
	setWeight(0);
	setHeight(0);
	this->_job = "undefined";
}

Adult::Adult(std::string name, std::string surname, int age, int weight, int height, std::string job):Human(name, surname,age, weight, height),_job(age::correctAlpha(job)){}
Adult::Adult(std::string name, std::string surname, int age, int weight, int height) : Human(name, surname, age, weight, height), _job("undefined") {}
Adult::Adult(std::string name, std::string surname, int age, int weight) : Human(name, surname, age, weight, 0), _job("undefined") {}
Adult::Adult(std::string name, std::string surname, int age) : Human(name, surname, age,0, 0), _job("undefined") {}
Adult::Adult(std::string name, std::string surname) : Human(name, surname, 0, 0, 0), _job("undefined") {}
Adult::Adult(std::string name) : Human(name, "undefined", 0, 0, 0), _job("undefined") {}

void Adult::setJob(std::string job) {
	this->_job = age::correctAlpha(job);
}

std::string Adult::getJob() {
	return _job;
}
void Adult::displayAdult() {
	Human::display();
	std::cout << "Job: " << _job << std::endl;
}