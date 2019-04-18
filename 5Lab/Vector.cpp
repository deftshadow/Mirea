#include "Vector.h"
#include <iostream>
using namespace std;

int Vector(){
    Vector first;
    Vector second;


    cout << "Первый вектор:\n";

    cout << "\n\nВторой вектор:\n";

    return 0;
}


Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}

Vector &Vector::operator(const Vector &val){


}



bool Vector:: operator =(const Vector & )

