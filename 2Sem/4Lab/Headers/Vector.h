
#ifndef INC_4LAB_VECTOR_H
#define INC_4LAB_VECTOR_H
int FOURTH();

class Vector {
private:
    float x,y,z;
public:
    void Setter();
    void Getter();
    void ABC();
    void SUM(Vector f1, Vector f2);
    void DIF(Vector f1, Vector f2);

    Vector();
    Vector(float xVal, float yVal, float zVal);
    Vector(float x_y_zVal);
    Vector(const Vector &object);

    ~Vector();

};


#endif //INC_4LAB_VECTOR_H
