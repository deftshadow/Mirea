
#ifndef CONSOLE_CALCULATOR_SOURSE_H
#define CONSOLE_CALCULATOR_SOURSE_H
#include <string>
using namespace std;

void Power(double,double);
void Sine(double);
void Square(double);
void Cos(double);
void Tan(double);
void Log(double);
void Baselog(double);
void application(double x);


int stack( string expression);
bool is_symbol(char sym);
bool is_mid_priority(char sym);
bool is_low_priority(char sym);
bool is_high_priority(char sym);

#endif //CONSOLE_CALCULATOR_SOURSE_H
