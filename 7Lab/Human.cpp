#include "Human.h"
#include <iostream>
using namespace std;

int FIRST(){


    Boss boss{ "кто", "кто-то", "какой-тович", 89, 90};
    Student student{ "Кужахметова", "Арина", "Сериковна", 18, true };
    boss.print();


    Human*human = &student;
    human->print();




    return 0;
}




Human::Human(string Name, string Surname, string Midname, int Age) {
    name = Name;
    surname = Surname;
    midname = Midname;
    age = Age;
}

Student::Student(string Name, string Surname, string Midname, int Age, bool Lesson) {
    name = Name;
    surname = Surname;
    midname = Midname;
    age = Age;
    on_lesson = Lesson;
}



Boss::Boss(string Name, string Surname, string Midname, int Age, int Workers) {
    name = Name;
    surname = Surname;
    midname = Midname;
    age = Age;
    number_of_workers = Workers;
}