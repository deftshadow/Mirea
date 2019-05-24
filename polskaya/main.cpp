#include <iostream>
#include "to_pol.h"

int main() {


    std :: string input;
    std :: string answer;
    std :: cout << "Input   ";
    std :: cin >> input;


    std :: cout << "Pol     \n" << str_to_pol(input) << std :: endl;
//    std :: cout << "Result  \n" << pol_to_answer(str_to_pol(input)) << std :: endl;
}