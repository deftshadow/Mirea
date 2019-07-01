#include <iostream>
#include "Human.h"
using namespace std;

int main() {
    int switcher = 1;
    do {
        cout << "\nEnter task\n";
        cin >> switcher;
        switch (switcher) {
            case 1:
                FIRST();
                cout << "\n\tTask 1 completed\n";
                break;
            default:
                cerr << "ERROR";
        }
    } while (switcher != 0);

    return 0;
}