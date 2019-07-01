#ifndef INC_6LAB_HEADMAN_H
#define INC_6LAB_HEADMAN_H
#include <string>
using namespace std;
int FIRST();


class Student {
protected:
    string name,surname, group, age;


public:
    void Setter();
    void Getter();

};

class Headman : public Student{
protected:
    long int PhoneNumber;
    string email;
public:
    void SetHeadman();
    void GetHeadman();

};


#endif //INC_6LAB_HEADMAN_H
