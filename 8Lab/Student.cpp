#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;

int FIRST(){
    unsigned long int Count;
    Student student;
    cout << "ВВЕДИТЕ КОЛИЧЕСТВО СТУДЕНТОВ:";
    cin >> Count;
    vector<Student> Group(Count);


    try {
        for (int i =0 ; i < Group.size() ; ++i) {
            cout << '\n' << i + 1 << ")";
            Group[i].Setter();
        }


        for (int i = 0; i <Group.size(); i++){
            cout << "\nЛИЧНЫЕ ДАННЫЕ " << i+1 << " СТУДЕНТА:\n";
            Group[i].Getter();
        }

    }
    catch(const exception& ex) {
        cout << ex.what() << '\n';
        cerr << "ERROR!";
    }

    return false;
}




void Student::Setter() {
    cout << "Введите имя: ";
    cin >> name;
    cout << "Введите фамилию: ";
    cin >> surname;
    cout << "Введите возраст: ";
    cin >> age;
}

void Student::Getter() {

    cout << "Имя:" << name << '\n';
    cout << "Фамилия:" << surname << '\n';
    cout << "Возраст:" << age << '\n';
}
