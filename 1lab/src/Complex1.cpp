#include <iostream>
#include "Complex1.h"
#include <string>
using namespace std;

int FIRST(){
    T calculator;
    int choice;
    string check;
    cout << "Какую операцию хотите выполнить?\n1. Сложение комплексных чисел\n2. Вычитание комплексных чисел\n"
            "3. Умножение комплексных чисел\n4. Деление комплексных чисел\n"
            "5. Умножение комплексного числа на вещественное число\nВведите номер выбранной операции:  ";
    again:
    cin >> check;
    if (check.length() != 1 || check[0] < '1' || check[0] > '5')
    {
        cerr << "Ошибка ввода!\nВведите номер выбранной операции заново: ";
        goto again;
    }
    choice = stoi(check);
     if(choice != 5){
         cout << "\nАлгебраическая форма комплексного числа z = x + y*i\n";
         cout << "\nВведите х для первого числа: ";
         calculator.x1 = Enter();
         cout << "Введите y для первого числа: ";
         calculator.y1 = Enter();
         cout << "Введите х для второго числа: ";
         calculator.x2 = Enter();
         cout << "Введите y для второго числа: ";
         calculator.y2 = Enter();

         switch (choice){
             case 1:calculator.sum();
                 break;
             case 2: calculator.difference();
                 break;
             case 3: calculator.multiplication();
                 break;
             case 4: calculator.div();
                 break;
         }
     }
     else {
         cout << "Алгебраическая форма комплексного числа z = x + y*i\n";
         cout << "Введите х для комплексного числа: ";
         calculator.x1 = Enter();
         cout << "Введите y для комплексного числа: ";
         calculator.y1 = Enter();
         cout << "Введите вещественное число на которе будете умножать: ";
         calculator.alfa = Enter();
         calculator.pr_alfa();
     }
}


float Enter(){
    string check;
    bool indikator;
    int k;
    again_1:
    indikator = false;
    k = 0;
    cin >> check;
    if ((check[0] == '0') && (check[1] == '0'))
        indikator = true;
    if ((check[0] == '-') && check.length() == 1)
        indikator = true;
    if ((check[0] == '-') && (check[1] == '.'))
        indikator = true;
    if (((check[0] < '0') || (check[0] > '9')) && (check[0] != '-'))
        indikator = true;
    for (int i = 1; i < check.length(); i++)
        if (check[i] == '.')
            k++;
    for (int i = 1; i < check.length(); i++)
        if (((check[i] < '0') || (check[i] > '9')) && (check[i] != '.'))
            indikator = true;
    if(k > 1)
        indikator = true;
    for (int i = 1; i < check.length(); i++)
        if (check[i] == '.')
            check[i] = ',';
    if(indikator) {
        cerr << "Ошибка ввода!\nВведите число заново: ";
        goto again_1;
    }
    return stof(check);
}


void T::sum() {
    if (y1 + y2 >= 0)
        cout << "\nСумма: " << x1 + x2 << "+" << y1 + y2 << "*i\n";
    else
        cout << "\nСумма: " << x1 + x2 << y1 + y2 << "*i\n";
}

void T::difference() {
    if (y1 - y2 >= 0)
        cout << "\nРазность: " << x1 - x2 << "+" << y1 - y2 << "*i\n";
    else
        cout << "\nРазность: " << x1 - x2 << y1 - y2 << "*i\n";
}

void T::multiplication() {
    if (x1 * y2 + x2 * y1 >= 0)
        cout << "\nПроизведение: " << x1 * x2 - y1 * y2 << "+" << x1 * y2 + x2 * y1 << "*i\n";
    else
        cout << "\nПроизведение: " << x1 * x2 - y1 * y2 << x1 * y2 + x2 * y1 << "*i\n";
}


void T::div(){
    if ((double)(x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) >= 0)
        cout << "\nЧастное: " << (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2) << "+" << (x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) << "*i\n";
    else
        cout << "\nЧастное: " << (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2) << (x2 * y1 - x1 * y2) / (x2 * x2 + y2 * y2) << "*i\n";
}

void T::pr_alfa() {
    if (y1 * alfa >= 0)
        cout << "\nПроизведение: " <<  (x1 * alfa) << "+" << (y1 * alfa) << "*i\n";
    else
        cout << "\nПроизведение: " <<  (x1 * x2 - y1 * y2) << (x1 * y2 + x2 * y1) << "*i\n";
}
