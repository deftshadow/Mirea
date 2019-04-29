#ifndef INC_8LAB_AUTO_H
#define INC_8LAB_AUTO_H

#include <string>
#include <ostream>
using namespace std;
int THIRD();
class Car {
private:
    string mark;
    int year;
public:
    Car(string mark = "", int year=0);
    friend ostream  &operator <<(ostream &stream, const Car &rbk);
};


#endif //INC_8LAB_AUTO_H
