#include "Auto.h"
#include <iostream>
#include <queue>
using namespace std;

int THIRD(){
    queue<Auto> AutoQue;
    Auto autoo;

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


Auto::Auto(const string &mark, int year) : mark(mark), year(year) {}

ostream  &operator <<(ostream &stream, const Auto &rbk){
    cout << "Mark:"<<rbk.mark << '\n'<<"Year:" << rbk.year;
    return stream;
}
