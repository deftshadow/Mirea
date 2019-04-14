#include <iostream>
#include "Child.h"
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

                    cout << "\nTask 2 completed\n";
                    break;
                case 3:

                    cout << "\nTask 3 completed\n";
                    break;
                case 4:

                    cout << "\nTask 4 completed\n";
                    break;
                default:
                    cerr << "ERROR";
            }
        } while (switcher != 0);
        return 0;
    }