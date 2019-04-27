#ifndef INC_8LAB_STUDENT_H
#define INC_8LAB_STUDENT_H

#include <string>
using namespace std;
int FIRST();

class Student {
private:
    string name, surname, midname;
    int age;
public:
    Student(const string &name = "NONE", const string &surname = "NONE", const string &midname = "NONE", int age = 0);
    Student(const Student &source);





};


#endif //INC_8LAB_STUDENT_H
