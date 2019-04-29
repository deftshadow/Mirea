#ifndef INC_8LAB_AUTO_H
#define INC_8LAB_AUTO_H

#include <string>
using namespace std;
int THIRD();
class Auto {
private:
    string mark;
    int year;
public:
    Auto(const string &mark=0, int year=0);
    friend ostream  &operator <<(ostream &stream, const Auto &rbk);
};


#endif //INC_8LAB_AUTO_H
