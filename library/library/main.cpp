
#include <iostream>
#include "Library.h"
#include "Bookcase.h"
#include "IPerson.h"
#include "Visitor.h"
#include "Client.h"
#include "Employee.h"
#include "IPrint.h"
#include "Book.h"
#include "Newspaper.h"
#include "Magazine.h"

int main()
{
    Magazine* stars = new Magazine("stars", 0, "scientific", "May 2023");
    Magazine* beHealthy = new Magazine("beHealty", 0, "publicistic", "June 2020");
    Book* it = new Book("It", 18, "horror");
    Book* harry = new Book("Harry Potter", 12, "fansasy");
    Newspaper* scanwords = new Newspaper("Grandma's pie", 6, "January 2024");
    Newspaper* news = new Newspaper("Evening Rostov", 12, "March 2024");

    Visitor* justLooking = new Visitor("Vasya", "Smirnov", 25, "0000");
    
    IPrint** group1 = new IPrint * [3]{stars,it,scanwords};
    IPrint** group2 = new IPrint * [3]{ beHealthy,harry,news};
    
    Bookcase* bookcase1 = new Bookcase(group1,3);
    Bookcase* bookcase2 = new Bookcase(group2,3);
    Bookcase** bookcases = new Bookcase * [2]{ bookcase1,bookcase2 };
    
    Employee* dasha = new Employee("Dasha", "Pavlova", 35,"librarian");
    Employee* pavel = new Employee("Pavel", "Durov", 60, "security guard");
    
    Employee** stuff = new Employee * [2]{ dasha,pavel };
   
    Book* kolobok = new Book("kolobok", 0, "fairy tale");
    Magazine* ezhik = new Magazine("ezhik", 0, "for kids", "April 2022");
    
    IPrint** dimaTook = new IPrint * [2]{ kolobok,ezhik };
    
    Client* dima = new Client("Dima", "Pupkin", 11, "9999", dimaTook, 2);
    Client* valera = new Client("Valeriy", "Leontyev", 39, "1111", nullptr, 0);

    Client** clients = new Client * [2]{ dima,valera };

    Library* library = new Library(bookcases, 2, stuff, 2, clients, 2);

    library->give(it, dima);
    library->give(stars, dima);
    library->turnBack(kolobok, dima);
    dima->displayPerson();
    library->give(kolobok, valera);
    library->turnBack(stars, valera);
    bookcase1->displayBookcase();
    valera->displayPerson();

}


