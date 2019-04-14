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
    Child(const string &name = "None", const string &surname = "None", int age = 0);
    Child(const Child &source);
    ~Child(){}

    void Getter();
    void Setter();

};

#endif //INC_4LAB_CHILD_H
