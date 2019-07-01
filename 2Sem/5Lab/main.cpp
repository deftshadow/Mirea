#include <iostream>
#include "Complex.h"
#include "Vector.h"
using namespace std;

int main() {
    int switcher = 1;
    do {
        cout << "\nEnter task\n";
        cin >> switcher;
        switch (switcher) {
            case 1:
                FIRST();
                cout << "\nTask 1 completed\n";
                break;
            case 2:
                SECOND();
                cout << "\nTask 2 completed\n";
                break;
            default:
                cerr << "ERROR";
        }
    } while (switcher != 0);
    return 0;
}