#ifndef INC_6LAB_ANIMAL_H
#define INC_6LAB_ANIMAL_H

#include <string>
using namespace std;
int THIRD();

class Animal {
    string name,toy, pet;
public:
    void Setter();
    void Getter();
};

class Dog:Animal{
public:
    void SetterDog();
    void GetterDog();
};

class Cat:Animal{
public:
public:
    void SetterCat();
    void GetterCat();
};

#endif //INC_6LAB_ANIMAL_H
