#include <iostream>
#include "Sourse.h"
using namespace std;


int main() {
    double a, b;
    string priority;

    cout << "WHAT DO YOU WANT TO FIND:\n";
    cout << "Press '1' for Power:\n";
    cout << "Press '2' for Sin:\n";
    cout << "Press '3' for Square:\n";
    cout << "Press '4' for Cos:\n";
    cout << "Press '5' for Tan:\n";
    cout << "Press '6' for Log:\n";
    cout << "Press '7' for Base Log:\n";
    cout << "Press '8' for Plus:\n";
    cout << "Press '9' for Minus:\n";
    cout << "Press '10' for Division:\n";
    cout << "Press '11' for Multiplication:\n";
    cout << "Press '12' for EXP:\n";
    cout << "Press '13' for Priority operations:\n";

    int switcher = 1;
    do {
        cout << "\n\nENTER OPERATION:\n";
        cin >> switcher;
        switch (switcher) {

            case 1:
                cout << "Enter the Number for Calculating its Power: \n";
                cin >> a;
                cout << "Enter the Power for a Number: \n";
                cin >> b;
                Power(a, b);
                break;
            case 2:
                cout << "Enter the Number for Calculating SIN: \n";
                cin >> a;
                Sine(a);
                break;
            case 3:
                cout << "Enter the Number for Calculating Square: \n";
                cin >> a;
                Square(a);
                break;
            case 4:
                cout << "Enter the Number for Calculating COS: \n";
                cin >> a;
                Cos(a);
                break;
            case 5:
                cout << "Enter the Number for Calculating TAN: \n";
                cin >> a;
                Tan(a);
                break;
            case 6:
                cout << "Enter the Number for Calculating LOG: \n";
                cin >> a;
                Log(a);
                break;
            case 7:
                cout << "Enter the Number for Calculating LOG WITH BASE 10: \n";
                cin >> a;
                Baselog(a);
                break;
            case 8:
                cout << "Enter the Number A for operation PLUS:\n";
                cin >> a;
                cout << "Enter the Number B for operation PlUS:\n";
                cin >> b;
                cout << "A + B = " << a + b<< '\n';
                break;
            case 9:
                cout << "Enter the Number A for operation MINUS:\n";
                cin >> a;
                cout << "Enter the Number B for operation MINUS:\n";
                cin >> b;
                cout << "A - B = " << a - b<< '\n';
                break;
            case 10:
                cout << "Enter the Number A for operation DIVISION:\n";
                cin >> a;
                cout << "Enter the Number B for operation DIVISION:\n";
                cin >> b;
                cout << "A/B = " << a/b<< '\n';
                break;
            case 11:
                cout << "Enter the Number A for operation MULTIPLICATION:\n";
                cin >> a;
                cout << "Enter the Number B for operation MULTIPLICATION:\n";
                cin >> b;
                cout << "A*B = " << a*b<< '\n';
                break;
            case 12:
                cout << "Enter EXP:\n";
                cin >> a;
                application(a);
                break;
            case 13:
                cout << "Enter operation:\n";
                cin >> priority;
                stack(priority);
                break;
            default:
                cerr << "ERROR";
        }
    } while (switcher != 0);
    return 0;

}

