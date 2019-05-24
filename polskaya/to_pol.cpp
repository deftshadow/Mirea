#include "to_pol.h"
#include <iostream>
#include <string>
using namespace std;


string str_to_pol(string input) {
    string result = "None";

    if (input.back() != '.') {
        cout << "Incorrect end of line.";
        return "Incorrect end of line.";
    }

    stack<string> stak;
    stack<int> priorites;

    vector<string> output_line;

    for (int i = 0; i < input.size(); i++) {
        cout << i + 1 << ". Читаю очередной символ входной строки '" << input[i] << "'" << '\n';


        if (input[i] == '.') {
            cout << "Считал конец строки." << '\n';
            while (!stak.empty()) {
                cout << "Стэк не пуст. Переношу '" << stak.top() << "'в выходную строку." << '\n';
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
                        std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для sin." << '\n';
                        if (input[i + 2] == 'n') {
                            cout << "Символ '" << input[i + 2] << "' подходит для sin." << '\n';
                            cout << "sin операнд." << '\n';
                            is_operation = true;
                            i = i + 2;
                        } else {
                            cout << "Символ '" << input[i + 2] << "'. Не подходит для синуса." << '\n';
                            cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        cout << "Символ '" << input[i + 1] << "'. Не подходит для синуса." << '\n';
                        cout << "ОШИБКА ВВОДА" << '\n';
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

                        для операций у которых вначале одинаковые буквы можешь в одну ветвуь засунуть а дальше ответвлять
                     */


                    if (input[i] == 'c') {
                        cout << "Символ '" << input[i] << "'. Провека следующего символа для cos." << '\n';
                        if (input[i + 1] == 'o') {
                            cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для cos." << '\n';
                            if (input[i + 2] == 's') {
                                cout << "Символ '" << input[i + 2] << "' подходит для cos." << '\n';
                                cout << "cos операнд." << '\n';
                                is_operation = true;
                                i = i + 2;
                            } else {
                                cout << "Символ '" << input[i + 2] << "'. Не подходит для косинуса." << '\n';
                                cout << "ОШИБКА ВВОДА" << '\n';
                                return "ОШИБКА ВВОДА";
                            }
                        } else {
                            cout << "Символ '" << input[i + 1] << "'. Не подходит для косинуса." << '\n';
                            cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    }
                }
                else {

                    if (input[i] == 't') {
                        cout << "Символ '" << input[i] << "'. Провека следующего символа для tan." << '\n';
                        if (input[i + 1] == 'a') {
                            std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для tan."
                                      << '\n';
                            if (input[i + 2] == 'n') {
                                cout << "Символ '" << input[i + 2] << "' подходит для .tan" << '\n';
                                cout << "tan операнд." << '\n';
                                is_operation = true;
                                i = i + 2;
                            } else {
                                cout << "Символ '" << input[i + 2] << "'. Не подходит для тангенса." << '\n';
                                cout << "ОШИБКА ВВОДА" << '\n';
                                return "ОШИБКА ВВОДА";
                            }
                        } else {
                            cout << "Символ '" << input[i + 1] << "'. Не подходит для тангенса." << '\n';
                            cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    }
                }


                else {
                    if (input[i] == 'c') {
                        cout << "Символ '" << input[i] << "'. Провека следующего символа для cot." << '\n';
                        if (input[i + 1] == 'o') {
                            std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для cot."
                                      << '\n';
                            if (input[i + 2] == 't') {
                                cout << "Символ '" << input[i + 2] << "' подходит для cot." << '\n';
                                cout << "cot операнд." << '\n';
                                is_operation = true;
                                i = i + 2;
                            } else {
                                cout << "Символ '" << input[i + 2] << "'. Не подходит для котангенса." << '\n';
                                cout << "ОШИБКА ВВОДА" << '\n';
                                return "ОШИБКА ВВОДА";
                            }
                        } else {
                            cout << "Символ '" << input[i + 1] << "'. Не подходит для котангенса." << '\n';
                            cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    }

                }

                else {

                    if (input[i] == 'l') {
                        cout << "Символ '" << input[i] << "'. Провека следующего символа для sin." << '\n';
                        if (input[i + 1] == 'n') {
                            cout << "Символ '" << input[i + 1] << "'. подходит для LN." << '\n';
                            if (input[i + 2] == 'n') {
                                cout << "LN операнд." << '\n';
                                is_operation = true;
                                i = i + 2;
                            } else {
                                cout << "Символ '" << input[i + 2] << "'. Не подходит для НАТУРАЛЬНОГО ЛОГАРИФМА."
                                     << '\n';
                                cout << "ОШИБКА ВВОДА" << '\n';
                                return "ОШИБКА ВВОДА";
                            }
                        } else {
                            cout << "Символ '" << input[i + 1] << "'. Не подходит для НАТУРАЛЬНОГО ЛОГАРИФМА." << '\n';
                            cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    }

                }

                else {
                    if (input[i] == 'l') {
                        cout << "Символ '" << input[i] << "'. Провека следующего символа для LOG." << '\n';
                        if (input[i + 1] == 'o') {
                            std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для LOG."
                                      << '\n';
                            if (input[i + 2] == 'g') {
                                cout << "Символ '" << input[i + 2] << "' подходит для cot." << '\n';
                                cout << "LOG операнд." << '\n';
                                is_operation = true;
                                i = i + 2;
                            } else {
                                cout << "Символ '" << input[i + 2] << "'. Не подходит для ЛОГАРИФМА." << '\n';
                                cout << "ОШИБКА ВВОДА" << '\n';
                                return "ОШИБКА ВВОДА";
                            }
                        } else {
                            cout << "Символ '" << input[i + 1] << "'. Не подходит для ЛОГАРИФМА." << '\n';
                            cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    }
                }
            }
        }

    }
    return result;
}
