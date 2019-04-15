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

    Complex(float x=0, float y=0);

    ~Complex();

};


#endif //INC_4LAB_COMPLEX_H
