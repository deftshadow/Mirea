#include "Sourse.h"
#include <iostream>
#include <string.h>
#include <math.h>

#include <cstdlib>
#include <stack>
#include <vector>
#include <iterator>
#include <algorithm>

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






bool is_symbol(char sym)
{
    switch (sym)
    {
        case '+': return true;
        case '-': return true;
        case '(': return true;
        case '^': return true;
            // ---------- //
        case '/': return true;
        case '*': return true;
    }
    return false;
}

bool is_mid_priority(char sym)
{
    switch (sym)
    {
        case '/': return true;
        case '*': return true;
    }
    return false;
}

bool is_low_priority(char sym)
{
    switch (sym)
    {
        case '-': return true;
        case '+': return true;
    }
    return false;
}

bool is_high_priority(char sym)
{
    return sym == '^' ? true : false;
}

int stack( string expression) {

    stack<char> symbols;
    vector<char> exit_string;
    stack<double> result;
    double buffer = 0;

    for (string::iterator it = expression.begin(); it != expression.end(); ++it) {
        if (isdigit(*it)) exit_string.push_back(*it); // Если это цифра
        else if (is_symbol(*it)){  // Если это символ
            if (is_low_priority(*it)) {
                if (symbols.size() && (is_mid_priority(symbols.top()) || is_high_priority(symbols.top()))) {
                    exit_string.push_back(symbols.top());
                    symbols.pop();
                }
                symbols.push(*it);
            }
            else if (is_mid_priority(*it)) {
                if (symbols.size() && is_high_priority(symbols.top())) {
                    exit_string.push_back(symbols.top());
                    symbols.pop();
                }
                symbols.push(*it);
            }
            else if (is_high_priority(*it)){
                symbols.push(*it);
            }
            else symbols.push(*it);
        }
        else if (*it == ')') {
            while (symbols.top() != '(') {
                cout << "\n";
                exit_string.push_back(symbols.top());
                symbols.pop();
            }
            if (symbols.size()){
                symbols.pop();
            }
        }
    }
    while (symbols.size()){
        exit_string.push_back(symbols.top()); symbols.pop();
    }
    copy(exit_string.begin(), exit_string.end(), ostream_iterator<char>(cout, " "));

    for (vector<char>::iterator it = exit_string.begin(); it != exit_string.end(); ++it) {
        if (::isdigit(*it)) result.push(*it - '0');
        else
            switch (*it){
                case '+': { buffer = result.top(); result.pop(); result.top() += buffer; break; }
                case '-': { buffer = result.top(); result.pop(); result.top() -= buffer; break; }
                case '*': { buffer = result.top(); result.pop(); result.top() *= buffer; break; }
                case '/': { buffer = result.top(); result.pop(); result.top() /= buffer; break; }
                case '^': { buffer = result.top(); result.pop(); result.top() = pow(result.top(), buffer); break; }

            }
    }
    cout << "\nANSWER: " << result.top() << '\n';

    return 0;
}


