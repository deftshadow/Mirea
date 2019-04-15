
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

    Vector(float x=0, float y=0, float z=0);

    ~Vector();

};


#endif //INC_4LAB_VECTOR_H
