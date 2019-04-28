#include "Complex.h"
#include <iostream>
using namespace std;

int SECOND(){
    Complex complex;






}


Complex::Complex(float Re, float Im) : Re(Re), Im(Im) {}

ostream  &operator <<(ostream &stream, const Complex &complex){
    stream <<"Re:" << complex.Re << "Im:" << complex.Im;
}