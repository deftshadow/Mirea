#include <iostream>
#include "2.h"
using namespace std;


void Tiles:: getData() {
    cout << "Бренд:" << brand;
    cout << "\nВысота:" << size_h;
    cout << "\nШирина:" << size_w;
    cout << "\nСтоимость:" << price;
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

}
