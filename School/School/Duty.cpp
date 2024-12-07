#include "Duty.h"

Duty::Duty() {
    setName("undefined");
    setSurname("undefined");
    setCourse(0);
    setExperience(0);
    setPost("undefined");
}

Duty::Duty(std::string name, std::string surname, int course, int experience, std::string post) :IPerson(name,surname), Pupil(course), Stuff(experience,post) {}
Duty::~Duty() {};


void Duty::displayPerson() {
    IPerson::displayPerson();
    std::cout << "Course: " << getCourse() << std::endl;
    std::cout << "Experience: " << getExperience() << std::endl;
    std::cout << "Post: " << getPost() << std::endl;
}
