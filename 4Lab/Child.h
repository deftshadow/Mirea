//
// Created by Арина Дракон on 14/04/2019.
//

#ifndef INC_4LAB_CHILD_H
#define INC_4LAB_CHILD_H

#include <string>
using namespace std;

int FOURTH();
class Child {
private:
    string name;
    string surname;
    int age;

public:
    Child(){

    }





    void Setter() {
        cout << "Ведите имя ребенка:";
        cin >> name;
        cout << "Введите фамилию ребека:";
        cin >> surname;
        cout << "Ведите возраст:";
        cin >> age;
    }

    void Getter() {
        cout << "Имя:" << name << '\n';
        cout << "Фамилия:" << surname << '\n';
        cout << "Возраст:" << age << '\n';
    }
};

#endif //INC_4LAB_CHILD_H
