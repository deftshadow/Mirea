#ifndef CONSOLE_CALCULATOR_POLSKAYA_H
#define CONSOLE_CALCULATOR_POLSKAYA_H
#include <string>
using namespace std;

//
//int stack(string expression);
//bool is_symbol(char sym);
//bool is_mid_priority(char sym);
//bool is_low_priority(char sym);
//bool is_high_priority(char sym);

string str_to_pol(string input);
double pol_to_answer(string pol);

#endif //CONSOLE_CALCULATOR_POLSKAYA_H
