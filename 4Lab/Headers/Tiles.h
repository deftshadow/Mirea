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

    Tiles();

    Tiles(string brandVal, float size_hVal, float size_wVal);

    Tiles(string brandVal, float size_hVal, float size_wVal, float priceVal);

    Tiles(const Tiles &object);

    ~Tiles();

};



#endif //INC_4LAB_TIELS_H
