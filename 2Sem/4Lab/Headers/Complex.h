#ifndef INC_4LAB_COMPLEX_H
#define INC_4LAB_COMPLEX_H
int THIRD();

class Complex {
private:
    float x,y;
public:


    void Setter();
    void Getter();
    void ABC();

    Complex();

    Complex(float x_yVal);

    Complex(float xVal, float yVal);

    Complex(const Complex &object);

    ~Complex();

};


#endif //INC_4LAB_COMPLEX_H
