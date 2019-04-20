#ifndef INC_5LAB_VECTOR_H
#define INC_5LAB_VECTOR_H

#include <ostream>

using namespace std;

int SECOND();
class Vector {
private:
    float x,y,z;
public:
    Vector(float x=0, float y=0, float z=0);

    Vector & operator =(const Vector  &rbk);
    bool operator==(const Vector &rbk);
    bool operator!=(const Vector &rbk);

    friend ostream &operator << (ostream &stream, Vector &vector);
    friend istream &operator >> (istream &stream,  Vector &vector);
};


#endif //INC_5LAB_VECTOR_H
