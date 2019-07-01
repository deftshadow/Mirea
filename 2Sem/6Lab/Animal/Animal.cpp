#include "Animal.h"
#include <iostream>
using namespace std;

int THIRD(){
    Dog dog;
    Cat cat;

    cout << "\nВведите информацию о собаке" << endl;
    dog.SetterDog();
    cout << "\nВведите информацию о кошке" << endl;
    cat.SetterCat();

    cout << "\nИнформация о собаке:" << endl;
    dog.GetterDog();
    cout << "\nИнформация о кошке:" << endl;
    cat.GetterCat();
}


void Animal ::Setter() {
    cout << "Имя питомца:";
    cin >> name;
    cout << "Любимая игрушка:";
    cin >> toy;
    cout << "Питомец домашний или дворовый?";
    cin >> pet;
}

void Animal::Getter() {
    cout << "Имя:" << name<<'\n';
    cout <<"Игрушка:" << toy<<'\n';
    cout <<"Тип:" << pet<<'\n';
}

void Dog::SetterDog() {
    return Setter();
}

void Dog ::GetterDog() {
    return Getter();
}

void Cat::SetterCat() {
    return Setter();
}

void Cat::GetterCat() {
    return Getter();
}