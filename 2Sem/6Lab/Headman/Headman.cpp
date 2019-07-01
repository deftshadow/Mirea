#include "Headman.h"
#include <iostream>
using namespace std;
int FIRST(){
    Student student;
    Headman headman;

    cout << "Ведите информацию о студенте";
    student.Setter();

    cout << "\nВведите информацию о старосте\n";
    headman.SetHeadman();


    cout << "\n\nДанные студента:";
    student.Getter();

    cout << "\n\nДанные старосты:";
    headman.GetHeadman();

}

void Headman ::SetHeadman() {
    cout << "Имя старосты:";
    cin >> name;
    cout << "Фамилия старосты:";
    cin >> surname;
    cout << "Возраст:";
    cin >> age;
    cout << "Введите номер группы старосты: ";
    cin >> group;
    cout << "Ведите телефон старосты:";
    cin >> PhoneNumber;
    cout << "Введите Email старосты: ";
    cin >> email;
}

void Headman::GetHeadman() {
    cout << "\nИмя студента: " << name << '\n';
    cout << "Возраст студента: " << age << '\n';
    cout << "Номер группы студента: " << group << '\n';
    cout << "Номер телефона старосты: " << PhoneNumber << '\n';
    cout << "Email старосты: " << email << '\n';
}

void Student::Setter() {
    cout << "\nВедите имя студента:";
    cin >> name;
    cout << "Введите фамилию студента:";
    cin >> surname;
    cout << "Введите возраст:";
    cin >> age;
    cout << "Введите номер группы студента: ";
    cin >> group;

}

void Student::Getter() {
    cout << "Имя:" << name << '\n';
    cout << "Фамилия:" << surname << '\n';
    cout << "Возраст:" << age << '\n';
    cout <<"Группа:" << group << '\n';

}