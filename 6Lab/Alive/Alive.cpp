#include "Alive.h"
#include <iostream>
using namespace std;
int SECOND(){
    Bird bird;
    Beast animal;
    Fish fish;

    cout << "Введите информацию о птице\n";
    bird.SetterBird();
    cout << "\n\nВведите информацию о животном\n";
    animal.SetterAnimal();
    cout << "\n\nВведите информацию о рыбе\n";
    fish.SetterFish();

    cout << "\n\n";
    cout << "Характеристика птицы\n";
    bird.GetterBird();
    cout << "\nХарактеристика животного\n";
    animal.GetterAnimal();
    cout << "\nХарактеристика рыбы\n";
    fish.GetterFish();


    return 0;

}



void Alive::Setter() {
    cout << "Название:";
    cin >> name;
    cout << "Введите, что он должен делать:";
    cin >> DoSmth;
}

void Alive::Getter() {
    cout << "Название:" << name<< '\n';
    cout << "Что он делает:" << DoSmth << '\n';
}


void Bird::SetterBird() {
    cout << "Название птицы:";
    cin >> name;
    cout << "Введите, что она должна сделать:";
    cin >> DoSmth;
}

void Bird ::GetterBird(){
    cout << "Название:" << name<< '\n';
    cout << "Что она делает:" << DoSmth << '\n';
}


void Beast::SetterAnimal() {
    cout << "Название:" << name<< '\n';
    cout << "Что оно делает:" << DoSmth << '\n';
}

void Beast::GetterAnimal() {
    cout << "Название:" << name<< '\n';
    cout << "Что оно делает:" << DoSmth << '\n';
}

void Fish::SetterFish() {
    cout << "Название:" << name<< '\n';
    cout << "Что она делает:" << DoSmth << '\n';
}

void Fish ::GetterFish() {
    cout << "Название:" << name<< '\n';
    cout << "Что она делает:" << DoSmth << '\n';
}