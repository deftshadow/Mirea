#include "Sourse.h"
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


void Power(double x,double y){
    double p = pow(x,y);
    cout<<"Power: "<<p;
}
void Sine(double x){
    double s = sin(x);
    cout<<"Sin: "<<s;
}
void Square(double x){
    double sq = sqrt(x);
    cout<<"Square of a Given Value is: "<<sq;
}
void Cos(double x){
    double c = cos(x);
    cout<<"COS: "<<c;
}
void Tan(double x){
    double t = tan(x);
    cout<<"TAN: "<<t;
}
void Log(double x){
    double l = log(x);
    cout<<"Natural Logarithm: "<<l;
}
void Baselog(double x){
    double bl = log10(x);
    cout<<"LOG with Base 10: "<<bl;
}

void application(double x){
    double result =  exp (x);
    cout <<  "EXP(x) = " << result << endl;
}



