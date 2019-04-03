#include <iostream>
#include "Headers.h"
using namespace std;

void (*change (int *Arr, int sum1)) (int*, int){
    if(sum1 == Arr[0])
        return &invert;
    else if (sum1 > Arr[0])
        return &increase;
    else return &decrease;
}

void FIRST(){
    int* Arr;
    int size;
    cout << "\nВведите размерность массива:";
    cin >> size;
    Arr = new int[size];
    srand(time(NULL));
    int number;
    cout << "Массив из случайных чисел: ";
    for (int i = 0; i < size; i++){
        number = random() % 1000 +1 ;
        Arr[i] = number;
    }

    for(int i = 0;i < size;i++){
        cout << Arr[i] << " " ;
    }
    cout << '\n';
    delete []Arr;
    cout << "Сумма элеметнтов массива:";
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += Arr[i];
    }
    cout << sum << '\n';
    void (*action)(int*, int) = change (Arr, sum);
    action (Arr, size);
}

void increase (int* Arr, int amount) {
    int temp;
    cout << "Элементы массива расположены в возрастающем порядке:";
    for (int i = 0; i < amount - 1; i++){
        for (int j = 0; j < amount - i - 1; j++){
            if (Arr[j] > Arr[j+1]){
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < amount; i++)
        cout << Arr[i] << "\t";
}

void decrease (int *Arr, int amount) {
    cout << "Элементы массива расположены в уменьшающем порядке:";
    int temp;
    for (int i = 0; i < amount - 1; i++) {
        for (int j = i + 1; j < amount; j++) {
            if (Arr[i] < Arr[j]) {
                temp = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < amount; i++)
        cout << Arr[i] << "\t";

}

void invert (int *Arr, int amount) {
    cout << "Инвертированный массив:";
    int temp;
    for (int i = 0; i < amount; i++) {
        if (i != amount / 2) {
            temp = Arr[i];
            Arr[i] = Arr[amount - i - 1];
            Arr[amount - i - 1] = temp;
        }
        cout << Arr[i] << "\t";
    }
}
