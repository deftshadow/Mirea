#include "Complex.h"
#include <iostream>
#include <list>
using namespace std;

int SECOND(){
    list <Complex> b;
    try {
        Complex complex;
        b.push_back(complex);

        cout << "Вывод списка Complex:\n";
       for(auto i = b.begin(); i != b.end(); i++){
           cout << *i<<"\n";
       }
    }
    catch (const exception& ex) {
        cout << ex.what() << '\n';
        cerr << "ERROR!";
    }
}

Complex::Complex(float Re, float Im) : Re(Re), Im(Im) {}

ostream  &operator <<(ostream &stream, const Complex &complex){
    stream <<"Re:" << complex.Re <<'\n' <<"Im:" << complex.Im;
    return stream;
}



