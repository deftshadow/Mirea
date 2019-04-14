#include "Child.h"
#include <iostream>
using namespace std;

int FIRST(){
    Child FirstChild;
    Child SecondChild;



    cout << "\nДанные первого ребенка: \n";
    FirstChild.Setter();
    FirstChild.Getter();


    cout << "\nДанные второго ребенка: \n";
    SecondChild.Setter();
    SecondChild.Getter();




}

Child::Child(const string &name, const string &surname, int age) : name(name), surname(surname), age(age) {}

Child::Child(const Child &source): name(source.name), surname(source.surname), age(source.age){}







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



