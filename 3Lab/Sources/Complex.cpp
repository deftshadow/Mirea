#include "../Headers/Complex.h"
#include <iostream>
#include <math.h>
using namespace std;



int THIRD(){
    Complex complex;

    complex.Setter();
    complex.Getter();
    complex.ABC();
    return 0;
}




void Complex::Setter(){
    cout << "Ведите значеие X:";
    cin >> x;
    cout << "Введите значение Y:";
    cin >> y;
}


void Complex::Getter(){
    cout << "X:" << x<<'\n';
    cout <<"Y:" << y << '\n';
}


void Complex::ABC(){
    auto result = sqrt(x * x + y * y);
    cout << "Модуль числа:" << result;
}

