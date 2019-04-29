#include "Auto.h"
#include <iostream>
#include <queue>
using namespace std;

int THIRD(){
    queue<Car> AutoQue;
    Car autoo;

    try{

        AutoQue.push(autoo);

        cout << "\nВывод очереди" << endl;
        cout << "В очереди " << AutoQue.size() << " машин!\n" << endl;
        while (!AutoQue.empty())
        {
            cout << AutoQue.front() << endl;
            AutoQue.pop();
        }
    }

    catch (const exception& ex){
        cout << ex.what() << '\n';
        cerr << "ERROR!";
    }


}


Car::Car(string mark, int year) : mark(mark), year(year) {}

ostream  &operator <<(ostream &stream, const Car &rbk){
    cout << "Mark:"<<rbk.mark << '\n'<<"Year:" << rbk.year;
    return stream;
}
