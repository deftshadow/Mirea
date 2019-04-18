#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;

int SECOND(){
    Vector first;
    Vector second;


    cout << "Первый вектор:\n";
    cin >> first;

    cout << "\n\nВторой вектор:\n";
    cin >> second;

    if (first == second)
        cout << "Вектора равны\n";
    else
        cout << "Вектора не равны\n";
    return 0;
}


Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}


Vector &Vector:: operator= (const Vector  &rbk){
    cout << "Перегрузка переменных:\n";
    cout << "X:";
    x = rbk.x;
    cout << "Y:";
    y = rbk.y;
    cout << "Z:";
    z = rbk.z;
    return *this;
}


bool Vector:: operator ==(const Vector &rbk ){
    return (sqrt(x*x + y * y + z * z) == sqrt(rbk.x*rbk.x + rbk.y*rbk.y + rbk.z*rbk.z));
}

bool Vector::operator !=(const Vector &rbk){
    cerr << "ERROR";
    return !(sqrt(x*x + y * y + z * z) == sqrt(rbk.x*rbk.x + rbk.y*rbk.y + rbk.z*rbk.z));
}


ostream &operator << (ostream &ostream1, const Vector &vector){
    ostream1<<"X:"<<vector.x << "Y:" << vector.y << "Z:" << vector.z << "\n";
    return ostream1;
}

istream &operator >> (istream &istream1, const Vector &vector){
    cout << "X:";
    cin >> vector.x;
    cout << "Y:";
    cin >>vector.y;
    cout << "Z:";
    cin >> vector.z;

}
