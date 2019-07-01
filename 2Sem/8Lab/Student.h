#ifndef INC_8LAB_STUDENT_H
#define INC_8LAB_STUDENT_H

#include <string>
using namespace std;
int FIRST();

class Student {
private:
    string name, surname;
    int age;
public:
    void Setter();
    void Getter();
};


#endif //INC_8LAB_STUDENT_H
