//
// Created by Арина Дракон on 08/04/2019.
//

#ifndef INC_3LAB_2_H
#define INC_3LAB_2_H

#include <string>
using namespace std;
int SECOND();

class Tiles{
public:
    string brand;
    float size_h, size_w, price;

    void Setter(){
        cout << "Ведите название бренда:";
        cin >> brand;
        cout << "Ведите высоту:";
        cin >> size_h;
        cout << "Введите ширину:";
        cin >> size_w;
        cout << "Ведите стоимость:";
        cin >>price;
    }

    void getData();

};
#endif //INC_3LAB_2_H
