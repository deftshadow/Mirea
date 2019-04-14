#include <iostream>
#include <string>
#include "../Headers/Child.h"
using namespace std;


int FIRST() {
    Child ChildFirst;
    Child ChildSecond;

    ChildFirst.Setter();
    ChildSecond.Setter();

    cout << "\nДанные первого ребенка: \n";
    ChildFirst.Getter();

    cout << "\nДанные второго ребенка: \n";
    ChildSecond.Getter();

    return 0;
}