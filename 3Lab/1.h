
#ifndef INC_3LAB_HEADER_H
#define INC_3LAB_HEADER_H

#include <string>
using namespace std;

int FIRST();


class Child {
private:
    string ChildName;
    string ChildSurname;
    int ChildAge;

public:
    void SetName(string ChildNmame){
        name = ChildNmame;
    }

    string GetName(){
        return name;
    }

    void SetSurname(string ChildSurname){
        surname = ChildSurname;
    }

    string GetSurname(){
        return surname;
    }

    void SetAge(int ChildAge){
        age = ChildAge;
    }
    int GetAge(){
        return age;
    }
};







#endif //INC_3LAB_HEADER_H
