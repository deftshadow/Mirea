#include <iostream>
#include <string>
using namespace std;


int FIRST() {
    Child child;

    string name;
    string surname;
    cout << "Ведите имя ребенка:";
    getline(cin, name);
    cout << "Введите фамилию ребека:";
    getline(cin, surname);
    cout << "Ведите возраст:";

    //Сохранение имени,фамилии,возраста в объект класса Child
    child.SetName(name);
    child.SetSurname(surname);
    child.SetAge(age);

    cout << "Данные ребенка:\n";
    cout << "Имя:" << child.GetName() << '\n';
    cout << "Фамилия:" << child.GetSurname() << '\n';
    cout << "Возраст:" << child.SetAge() << '\n';

    delete child;
    return 0;
}