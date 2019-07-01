#ifndef INC_8LAB_COMPLEX_H
#define INC_8LAB_COMPLEX_H

#include <ostream>
using namespace std;
int SECOND();
class Complex {
private:
    float Re, Im;
public:
    Complex(float Re=0, float Im=0);

    friend ostream  &operator <<(ostream &stream, const Complex &complex);
};
#endif //INC_8LAB_COMPLEX_H
