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
    cout << "Чем питается?";
    cin >> eat;
    cout << "Введите,что animal должен делать:";
    cin >> DoSmth;
}

void Alive::Getter() {
    cout << "Название:" << name<< '\n';
    cout << "Питается:" << eat<<'\n';
    cout << "Что он делает:" << DoSmth << '\n';
}


void Bird::SetterBird() {
    return Setter();
}

void Bird ::GetterBird(){
    return Getter();
}


void Beast::SetterAnimal() {
    return Setter();
}

void Beast::GetterAnimal() {
    return Getter();
}

void Fish::SetterFish() {
    return Setter();
}

void Fish ::GetterFish() {
    return Getter();
}