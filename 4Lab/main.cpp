#include <iostream>
#include "Headers/Child.h"
#include "Headers/Tiles.h"
#include "Headers/Complex.h"
#include "Headers/Vector.h"

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
                case 3:
                    THIRD();
                    cout << "\nTask 3 completed\n";
                    break;
                case 4:
                    FOURTH();
                    cout << "\nTask 4 completed\n";
                    break;
                default:
                    cerr << "ERROR";
            }
        } while (switcher != 0);
        return 0;
    }