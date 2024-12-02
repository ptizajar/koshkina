#pragma once
#include "Human.h"
class Adult:public Human {
	public:
		Adult();
		Adult(std::string name, std::string surname, int age, int weight, int height,std::string job);
		Adult(std::string name, std::string surname, int age, int weight, int height);
		Adult(std::string name, std::string surname, int age, int weight);
		Adult(std::string name, std::string surname, int age);
		Adult(std::string name, std::string surname);
		Adult(std::string name);
		void setJob(std::string job);
		std::string getJob();
		void displayAdult();
	private:
		std::string _job;
};
