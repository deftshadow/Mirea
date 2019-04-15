#include "../Headers/Tiles.h"
#include <iostream>
using namespace std;

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

Tiles::Tiles() {
    brand = "None";
    size_h = 0;
    size_w = 0;
    price = 0;
}

Tiles::Tiles(string brandVal, float size_hVal, float size_wVal) {
    brand = brandVal;
    size_h = size_hVal;
    size_w = size_wVal;
    price = 0;
}

Tiles::Tiles(string brandVal, float size_hVal, float size_wVal, float priceVal) : brand(brandVal), size_h(size_hVal), size_w(size_wVal), price(priceVal){}

Tiles::Tiles(const Tiles &object) {
    brand = object.brand;
    size_h = object.size_h;
    size_w = object.size_w;
    price = object.price;
}



Tiles::~Tiles() {}

