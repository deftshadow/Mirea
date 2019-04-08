#include <iostream>
#include <string>
#include "1.h"
using namespace std;


int FIRST() {
    Child ChildFirst;
    Child ChildSecond;

    ChildFirst.Setter();
    ChildSecond.Setter();

    cout << "Данные первого ребенка: \n";
    ChildFirst.Getter();

    cout << "\nДанные второго ребенка: \n";
    ChildSecond.Getter();

    return 0;
}