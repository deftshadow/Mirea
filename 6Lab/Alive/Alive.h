#ifndef INC_6LAB_ALIVE_H
#define INC_6LAB_ALIVE_H

#include <string>
using namespace std;


int SECOND();
class Alive {
protected:
    string name, DoSmth, eat;
public:
    void Setter();
    void Getter();

};

class Bird : public Alive {
public:
    void SetterBird();
    void GetterBird();
};


class Fish : public Alive{
public:
    void SetterFish();
    void GetterFish();
};

class Beast:public Alive{
public:
    void SetterAnimal();
    void GetterAnimal();
};






#endif //INC_6LAB_ALIVE_H
