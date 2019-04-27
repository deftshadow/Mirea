#ifndef INC_7LAB_HUMAN_H
#define INC_7LAB_HUMAN_H

#include <string>
#include <iostream>
using namespace std;
int FIRST();


class Human {
protected:
    string name, surname, midname;
    int age;
public:
    Human();
    Human(string Name, string Surname, string Midname, int Age);
    virtual void print() {cout << "HUMAN\n";};
    ~Human() {}
};


class Student : public Human{
private:
    bool on_lesson;
public:
    Student();
    Student(string Name, string Surname, string Midname, int Age, bool Lesson );
    void print() override {cout << "STUDENT!\n"<<"NAME:"<<name << '\n' <<"SURNAME:"<< surname << '\n' <<"MIDNAME:"<< midname << '\n' <<"AGE:" <<  age << '\n' <<"LESSONS:" << on_lesson;};
    ~Student() {}

};

class Boss:public Human{
private:
    int number_of_workers;
public:
    Boss() {}
    Boss(string Name, string Surname, string Midname, int Age, int Workers);
    void print() override {cout << "BOSS!\n" << "NAME:"<<name << '\n' <<"SURNAME:"<< surname << '\n' <<"MIDNAME:"<< midname << '\n' <<"AGE:" <<  age << '\n'<<"NUMBER OF WORKERS:" << number_of_workers;};
    ~Boss(){};

};

#endif //INC_7LAB_HUMAN_H
