#include "../Headers/Child.h"
#include <iostream>
using namespace std;

int FIRST() {
    Child FirstChild;
    Child SecondChild;


    cout << "\nДанные первого ребенка: \n";
    FirstChild.Setter();
    FirstChild.Getter();


    cout << "\nДанные второго ребенка: \n";
    SecondChild.Setter();
    SecondChild.Getter();
}
void Child:: Setter() {
    cout << "Ведите имя ребенка:";
    cin >> name;
    cout << "Введите фамилию ребека:";
    cin >> surname;
    cout << "Ведите возраст:";
    cin >> age;
}
void Child :: Getter() {
        cout << "Имя:" << name << '\n';
        cout << "Фамилия:" << surname << '\n';
        cout << "Возраст:" << age << '\n';
    }
Child::Child() {
    name = "None";
    surname = "None";
    age = 0;
}
Child::Child(string nameVal, string surnameVal) {
    name = nameVal;
    surname = surnameVal;
    age = 0;
}

Child::Child(string nameVal, string surnameVal, int ageVal) :
name(nameVal), surname(surnameVal), age(ageVal) {}

Child::Child(const Child &object) {
    name = object.name;
    surname = object.surname;
    age = object.age;
}


