#include "Student.h"
#include <iostream>


using namespace std;

int FIRST(){
    Student student;




}


Student::Student(const string &name, const string &surname, const string &midname, int age) : name(name),
                                                                                              surname(surname),
                                                                                              midname(midname),
                                                                                              age(age) {}
Student::Student(const Student &source): name(source.name), surname(source.surname), midname(source.midname), age(source.age){}



