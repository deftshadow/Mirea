#include "Vector.h"
#include <iostream>
#include <math.h>
using  namespace std;

int FOURTH() {
    Vector firstVector;
    Vector secondVector;
    Vector sum;
    Vector dif;

    cout << "Первый вектор:\n";
    firstVector.Setter();
    firstVector.Getter();
    firstVector.ABC();


    cout << "\n\nВторой вектор:\n";
    secondVector.Setter();
    secondVector.Getter();
    secondVector.ABC();


    cout << "\n\nСумма первого и второго вектора:\n";
    sum.SUM(firstVector, secondVector);
    sum.Getter();

    cout << "\n\nРазность первого и второго вектора\n:";
    dif.DIF(firstVector, secondVector);
    dif.Getter();
}


void Vector::Setter() {
    cout << "Ведите значеие X:";
    cin >> x;
    cout << "Введите значение Y:";
    cin >> y;
    cout << "Ведите значение Z:";
    cin >> z;
}

void Vector::Getter() {
    cout << "X:" << x << '\n';
    cout << "Y:" << y << '\n';
    cout << "Z:" << z << '\n';
}


void Vector::ABC() {
    auto result = sqrt(x * x + y * y + z*z);
    cout << "Модуль числа:" << result;
}

void Vector::DIF(Vector f1,Vector f2) {
    x = f1.x - f2.x;
    y = f1.y - f2.y;
    z = f1.z - f2.z;


}

void Vector:: SUM(Vector f1, Vector f2){
    x = f1.x + f2.x;
    y = f1.y + f2.y;
    z = f1.z + f2.z;
}

Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}

Vector::~Vector() {}
