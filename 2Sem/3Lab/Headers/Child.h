
#ifndef INC_3LAB_HEADER_H
#define INC_3LAB_HEADER_H

#include <string>
#include <iostream>
using namespace std;

int FIRST();

class Child {
private:
    string name;
    string surname;
    int age;

public:
    void Setter(){
        cout << "Ведите имя ребенка:";
        cin >> name;
        cout << "Введите фамилию ребека:";
        cin >> surname;
        cout << "Ведите возраст:";
        cin >> age;
    }
    void Getter(){
        cout << "Имя:" << name << '\n';
        cout << "Фамилия:" << surname << '\n';
        cout << "Возраст:" << age << '\n';
    }
};

#endif //INC_3LAB_HEADER_H
