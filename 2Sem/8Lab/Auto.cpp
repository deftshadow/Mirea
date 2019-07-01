#include "Auto.h"
#include <iostream>
#include <queue>
using namespace std;

int THIRD(){
    queue<Car> AutoQue;
    Car autoo;

    try{
        AutoQue.push(autoo);

        cout << "\nВывод очереди" << '\n';
        cout << "В очереди " << AutoQue.size() << " машин!\n" << '\n';
        while (!AutoQue.empty())
        {
            cout << AutoQue.front() << '\n';
            AutoQue.pop();
        }
    }

    catch (const exception& ex){
        cout << ex.what() << '\n';
        cerr << "ERROR!";
    }

}
Car::Car(string mark, int year) : mark(mark), year(year) {}

<<<<<<< HEAD
ostream  &operator <<(ostream &stream, const Car &rbk){
    cout << "Mark: "<<rbk.mark << '\n'<<"Year: " << rbk.year;
=======

Car::Car(string mark, int year) : mark(mark), year(year) {}

ostream  &operator <<(ostream &stream, const Car &rbk){
    cout << "Mark:"<<rbk.mark << '\n'<<"Year:" << rbk.year;
>>>>>>> 538516b... completed
    return stream;
}
