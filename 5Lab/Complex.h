#ifndef INC_5LAB_COMPLEX_H
#define INC_5LAB_COMPLEX_H

#include <ostream>
using namespace std;

int FIRST();
class Complex {
private:
    float Re, Im;
public:
    Complex(float Re=0, float Im=0);


    Complex &operator=(const Complex &obj);
    Complex &operator++(int Geek);
    Complex &operator--(int Geek);
    bool operator==(const Complex &rbk);
    bool operator!=(const Complex & rbk);
    friend ostream &operator<<(ostream &stream, Complex &rbk);
    friend istream &operator>>(istream &stream, Complex &rbk);



};


#endif //INC_5LAB_COMPLEX_H
