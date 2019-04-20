#include "Complex.h"
#include <iostream>
using namespace std;

int FIRST(){
    Complex first;
    Complex second;

    cout << "Введите первое комлексное число:\n";
    cin >> first;

    cout << "Введите второе комплексное число:\n";
    cin >> second;


    first++;
    second--;


    cout << "Инкремент первого числа:" << first <<'\n' << "Декремент второго числа:" << second <<'\n';

    if (first == second)
        cout << "Комплексные числа равны" << endl;
    if (first != second)
        cout << "Комплексные числа не равны" << endl;
    return 0;
}


Complex::Complex(float Re, float Im) : Re(Re), Im(Im) {}

Complex &Complex::operator=(const Complex &rbk) {
    Re = rbk.Re;
    Im = rbk.Im;
    return *this;
}

Complex &Complex::operator++(int Geek){
    Complex temp(*this);
    Re++;
    Im++;
    return temp;
}


Complex &Complex::operator--(int Geek){
    Complex temp(*this);
    Re--;
    Im--;
    return temp;
}

bool Complex::operator==(const Complex & rbk){
    return (Re == rbk.Re && Im == rbk.Im);
}

bool Complex::operator!=(const Complex & rbk) {
    return !(Re == rbk.Re && Im == rbk.Im);
}

ostream &operator<<(ostream &stream, Complex &rbk) {
    cout << "Complex:";
    if (rbk.Im >= 0)
        stream << rbk.Re << "+" << rbk.Im << "*i\n";
    else
        stream << rbk.Re << rbk.Im << "*i\n";
    return stream;
}


istream &operator>>(istream &stream, Complex &rbk) {
    cout << "Re:";
    stream >> rbk.Re;
    cout << "Im:";
    stream >>rbk.Im;
    return stream;
}


