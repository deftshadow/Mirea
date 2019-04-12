#include <iostream>
#include "../Headers/2.h"
using namespace std;


void Tiles:: getData() {
    cout << "Бренд:" << brand;
    cout << "\nВысота:" << size_h;
    cout << "\nШирина:" << size_w;
    cout << "\nСтоимость:" << price;
}

void Tiles::Setter(){
    cout << "Ведите название бренда:";
    cin >> brand;
    cout << "Ведите высоту:";
    cin >> size_h;
    cout << "Введите ширину:";
    cin >> size_w;
    cout << "Ведите стоимость:";
    cin >>price;
}

int SECOND(){
    Tiles firstTiles;
    Tiles secondTiles;

    firstTiles.Setter();
    secondTiles.Setter();

    cout << "\n\nПервый кафель:\n";
    firstTiles.getData();

    cout << "\n\nВторой кафель:\n";
    firstTiles.getData();
    return 0;
}
