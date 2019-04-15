#ifndef INC_4LAB_TIELS_H
#define INC_4LAB_TIELS_H
#include <string>
using namespace std;
int SECOND();

class Tiles {
public:
    string brand;
    float size_h, size_w, price;

    void Setter();
    void getData();

    Tiles(const string &brand = "None", float size_h = 0, float size_w =0, float price=0);

    ~Tiles();

};



#endif //INC_4LAB_TIELS_H
