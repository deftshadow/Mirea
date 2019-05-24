#include "Polskaya.h"
#include <cstdlib>
#include <stack>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>
#include <iostream>


using namespace std;



//bool is_symbol(char sym)
//{
//    switch (sym)
//    {
//        case '+': return true;
//        case '-': return true;
//        case '(': return true;
//        case '^': return true;
//            // ---------- //
//        case '/': return true;
//        case '*': return true;
//    }
//    return false;
//}
//
//bool is_mid_priority(char sym)
//{
//    switch (sym)
//    {
//        case '/': return true;
//        case '*': return true;
//    }
//    return false;
//}
//
//bool is_low_priority(char sym)
//{
//    switch (sym)
//    {
//        case '-': return true;
//        case '+': return true;
//    }
//    return false;
//}
//
//bool is_high_priority(char sym)
//{
//    return sym == '^' ? true : false;
//}
//
//int stack( string expression) {
//
//    stack<char> symbols;
//    vector<char> exit_string;
//    stack<double> result;
//    double buffer = 0;
//
//    for (string::iterator it = expression.begin(); it != expression.end(); ++it) {
//        if (isdigit(*it)) exit_string.push_back(*it); // Если это цифра
//        else if (is_symbol(*it)){  // Если это символ
//            if (is_low_priority(*it)) {
//                if (symbols.size() && (is_mid_priority(symbols.top()) || is_high_priority(symbols.top()))) {
//                    exit_string.push_back(symbols.top());
//                    symbols.pop();
//                }
//                symbols.push(*it);
//            }
//            else if (is_mid_priority(*it)) {
//                if (symbols.size() && is_high_priority(symbols.top())) {
//                    exit_string.push_back(symbols.top());
//                    symbols.pop();
//                }
//                symbols.push(*it);
//            }
//            else if (is_high_priority(*it)){
//                symbols.push(*it);
//            }
//            else symbols.push(*it);
//        }
//        else if (*it == ')') {
//            while (symbols.top() != '(') {
//                cout << "\n";
//                exit_string.push_back(symbols.top());
//                symbols.pop();
//            }
//            if (symbols.size()){
//                symbols.pop();
//            }
//        }
//    }
//    while (symbols.size()){
//        exit_string.push_back(symbols.top()); symbols.pop();
//    }
//    copy(exit_string.begin(), exit_string.end(), ostream_iterator<char>(cout, " "));
//
//    for (vector<char>::iterator it = exit_string.begin(); it != exit_string.end(); ++it) {
//        if (::isdigit(*it)) result.push(*it - '0');
//        else
//            switch (*it){
//                case '+': { buffer = result.top(); result.pop(); result.top() += buffer; break; }
//                case '-': { buffer = result.top(); result.pop(); result.top() -= buffer; break; }
//                case '*': { buffer = result.top(); result.pop(); result.top() *= buffer; break; }
//                case '/': { buffer = result.top(); result.pop(); result.top() /= buffer; break; }
//                case '^': { buffer = result.top(); result.pop(); result.top() = pow(result.top(), buffer); break; }
//
//            }
//    }
//    cout << "\nANSWER: " << result.top() << '\n';
//
//    return 0;
//}




















 string str_to_pol(string input) {
     string result = "None";

     if (input.back() != '.') {
         cout << "Incorrect end of line.";
         return "Incorrect end of line.";
     }

     stack < string > stak;
     stack < int > priorites;

     vector<string> output_line;

     for (int i = 0; i < input.size(); i++) {
         cout << i + 1 << ". Читаю очередной символ входной строки '" << input[i] << "'" << '\n';


         if (input[i] == '.') {
             cout << "Считал конец строки." << std::endl;
             while (!stak.empty()) {
                 std::cout << "Стэк не пуст. Переношу '" << stak.top() << "'в выходную строку." << '\n';
                 output_line.push_back(stak.top());
                 stak.pop();
             }
         } else if (input[i] == '(') {
             cout << "Считал открывающую скобку. Переношу в стек." << '\n';
             stak.push("(");
         } else if (input[i] == ')') {
             cout << "Считал закрывающую скобку. Переношу в стек." << '\n';
             while (stak.top() != "(") {
                 cout << "В стэке не открывающая скобка. Переношу '" << stak.top() << "' в выходную строку." << '\n';
                 output_line.push_back(stak.top());
                 stak.pop();
             }
             if (stak.top() == "(") {
                 cout << "Удаляю из стека открывающую скобку." << '\n';
                 stak.pop();
             }
         } else {
             bool is_operation = false;

             if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^') {
                 cout << "Символ '" << input[i] << "' операнд." << '\n';
                 is_operation = true;
             } else {
                 if (input[i] == 's') {
                     cout << "Символ '" << input[i] << "'. Провека следующего символа для sin." << '\n';
                     if (input[i + 1] == 'i') {
                         cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для sin." << '\n';
                         if (input[i + 2] == 'n') {
                             cout << "Символ '" << input[i + 2] << "' подходит для sin." << '\n';
                             cout << "sin операнд." << '\n';
                             is_operation = true;
                             i = i + 2;
                         } else {
                             cout << "Символ '" << input[i + 2] << "'. Не подходит для синуса." << '\n';
                             cout << "ОШИБКА ВВОДА" << std::endl;
                             return "ОШИБКА ВВОДА";
                         }
                     } else {
                         cout << "Символ '" << input[i + 1] << "'. Не подходит для синуса." << '\n';
                         cerr << "ОШИБКА ВВОДА" << '\n';
                         return "ОШИБКА ВВОДА";
                     }
                 } else {
                     /*
                      ВОТ ТУТ ПО АНАЛОГИИ РАСПИШИ
                         cos
                         tg
                         ctg
                         arcsin
                         arccos
                         arctg
                         arcctg
                         ln
                         log
                         (exp не над он как операнд будет)

                         для операций у которыз вначале одинаковые буквы можешь в одну ветвуь засунуть а дальше ответвлять
                      */
                 }
             }


         }

     }


     return result;
 }

