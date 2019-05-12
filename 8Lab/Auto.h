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
<<<<<<< HEAD
    Car(string mark = "NONE", int year=0);
=======
    Car(string mark = "", int year=0);
>>>>>>> 538516b... completed
    friend ostream  &operator <<(ostream &stream, const Car &rbk);
};


#endif //INC_8LAB_AUTO_H
