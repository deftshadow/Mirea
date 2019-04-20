#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;

int SECOND(){
    Vector first;
    Vector second;


    cout << "Первый вектор:\n";
    cin >> first;

    cout << "Второй вектор:\n";
    cin >> second;

    if (first == second)
        cout << "Вектора равны\n";
    else
        cout << "Вектора не равны\n";
    return 0;
}


Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}


Vector &Vector:: operator= (const Vector  &rbk){
    x = rbk.x;
    y = rbk.y;
    z = rbk.z;
    return *this;
}


bool Vector:: operator ==(const Vector &rbk ){
    return (sqrt(x*x + y * y + z * z) == sqrt(rbk.x*rbk.x + rbk.y*rbk.y + rbk.z*rbk.z));
}

bool Vector::operator !=(const Vector &rbk){
    cerr << "ERROR!";
    return (sqrt(x*x + y * y + z * z) != sqrt(rbk.x*rbk.x + rbk.y*rbk.y + rbk.z*rbk.z));
}


ostream &operator << (ostream &stream, Vector &vector){
    cout << "Vector:";
    stream<<"X:"<<vector.x << "Y:" << vector.y << "Z:" << vector.z << "\n";
    return stream;
}

istream &operator >> (istream &stream,  Vector &vector){
    cout << "X:";
    stream >> vector.x;
    cout << "Y:";
    stream >>vector.y;
    cout << "Z:";
    stream >> vector.z;
    return stream;
}
