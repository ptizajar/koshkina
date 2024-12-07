
#include <iostream>
#include "IPerson.h"
#include "IEmployee.h"
#include "Teacher.h"
#include "Stuff.h"
#include "Pupil.h"
#include "Duty.h"
#include "Class.h"
#include "Lesson.h"
#include "Day.h"
#include "Week.h"
#include "School.h"

int main()
{	
	Teacher* maria = new Teacher("Maria", "Petrova", 5, "russian");
	Teacher* ivan = new Teacher("Ivan", "Popov", 10, "math");
	Teacher* galina = new Teacher("Galina", "Kravtsova", 8, "english");
	Stuff* petr = new Stuff("Petr", "Petrov", 15, "guard");
	Stuff* gulya = new Stuff("Gulnara", "Ragibova", 20, "cleaner");
	IEmployee** workers = new IEmployee * [5]{ maria,ivan,galina,petr,gulya };
	Pupil* vanya = new Pupil("Vanya", "Smirnov", 5);
	Pupil* vasya = new Pupil("Vasya", "Pupkin", 5);
	Pupil* nastya = new Pupil("Nastya", "Gorelkina", 5);
	Pupil* katya = new Pupil("Katya", "Tenitskaya", 9);
	Pupil* vlad = new Pupil("Vlad", "Vengerov", 9);
	Pupil* sveta = new Pupil("Sveta", "Korobko", 9);
	Pupil** pupils1 = new Pupil * [3]{ vanya,vasya,nastya };
	Pupil** pupils2 = new Pupil * [3]{ katya,vlad,sveta };
	Class* kids = new Class(pupils1, 3,"5A");
	Class* teens = new Class(pupils2, 3, "9B");
	Class** classes = new Class * [2]{ kids,teens };
	Duty* nikita = new Duty("Nikita", "Sogoyan", 8, 0, "canteen helper");
	Lesson* math1 = new Lesson("Math", "8.00", ivan);
	Lesson* math2 = new Lesson("Math", "9.00", ivan);
	Lesson* math3 = new Lesson("Math", "10.00", ivan);
	Lesson* russian1 = new Lesson("Russian", "8.00", maria);
	Lesson* russian2 = new Lesson("Russian", "9.00", maria);
	Lesson* russian3 = new Lesson("Russian", "10.00", maria);
	Lesson* english1 = new Lesson("English", "8.00", galina);
	Lesson* english2 = new Lesson("English", "9.00", galina);
	Lesson* english3 = new Lesson("English", "10.00", galina);
	Lesson** lessons1 = new Lesson * [3]{ russian1, math2, english3 };
	Lesson** lessons2 = new Lesson * [3]{ math1, english2, russian3 };
	Lesson** lessons3 = new Lesson * [3]{ english1, russian2, math3 };
	Day* monday = new Day(lessons1, 3, "Monday");
	Day* tuesday = new Day(lessons2, 3, "Tuesday");
	Day* saturday = new Day(lessons3, 3, "Saturday");
	Day** week = new Day * [3]{ monday,tuesday,saturday };
	Week* firstWeek = new Week(week,3);
	School* school = new School(classes, 2, workers, 5);

	firstWeek->displayWeek();
	std::cout <<std::endl;
	kids->displayClass();
}
