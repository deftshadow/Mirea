#ifndef INC_4LAB_CHILD_H
#define INC_4LAB_CHILD_H

#include <string>
using namespace std;

int FIRST();
class Child {
private:
    string name;
    string surname;
    int age;

public:

    Child();

    Child(string nameVal, string surnameVal);

    Child(string nameVal, string surnameVal, int ageVal);

    Child(const Child &object);


    ~Child(){}

    void Getter();
    void Setter();

};

#endif //INC_4LAB_CHILD_H
