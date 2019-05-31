#include "to_pol.h"
#include <iostream>
#include <string>



std::string str_to_pol(std::string input) {
    std::string result = "None";


    std::stack <std::string> stak;
    std::stack <int> priorites;
    std::vector<std::string> output_line;

    for (int i = 0; i < input.size(); i++) {
        std::cout << "==========================================================" << '\n';
        std::cout << i + 1 << ". Читаю очередной символ входной строки '" << input[i] << "'" << '\n';

        if (input[i] == '(') {
            std::cout << "Считал открывающую скобку. Переношу в стек." << '\n';
            output_line.push_back("(");
            stak.push("(");
            priorites.push(0);
        } else if (input[i] == ')') {
            std::cout << "Считал закрывающую скобку." << '\n';
            while (stak.top() != "(") {

                std::cout << "В стeке не открывающая скобка. Переношу '" << stak.top() << "' в выходную строку." << '\n';
                output_line.push_back(stak.top());
                stak.pop();
                if (stak.size()>0) {
                    std :: cout << stak.top() << '\n';
                }
            }
            std::cout << "Удаляю из стека открывающую скобку." << '\n';
            stak.pop();
            output_line.push_back(")");
        } else {

            bool is_operation = false;
            std :: string operation;
            int prioritet = 0;

            if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^') {
                std::cout << "Символ '" << input[i] << "' операнд." << '\n';
                is_operation = true;
                operation = input[i];
                if (input[i] == '+' || input[i] == '-') {
                    prioritet = 1;
                }
                else if (input[i] == '*' || input[i] == '/') {
                    prioritet = 2;
                }
                else if (input[i] == '^') {
                    prioritet = 3;
                }
            }
            else {

                if (input[i] == 's') {
                    std::cout << "Символ '" << input[i] << "'. Провека следующего символа для sin." << '\n';
                    if (input[i + 1] == 'i') {
                        std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для sin." << '\n';
                        if (input[i + 2] == 'n') {
                            std::cout << "Символ '" << input[i + 2] << "' подходит для sin." << '\n';
                            std::cout << "sin операнд." << '\n';
                            is_operation = true;
                            operation = "sin";
                            prioritet = 4;
                            i = i + 2;
                        } else {
                            std::cout << "Символ '" << input[i + 2] << "'. Не подходит для sin." << '\n';
                            std::cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        std::cout << "Символ '" << input[i + 1] << "'. Не подходит для sin." << '\n';
                        std::cout << "ОШИБКА ВВОДА" << '\n';
                        return "ОШИБКА ВВОДА";
                    }
                }

                else if (input[i] == 'c') {
                    std::cout << "Символ '" << input[i] << "'. Провека следующего символа для cos и cot." << '\n';
                    if (input[i + 1] == 'o') {
                        std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для cos и cot." << '\n';
                        if (input[i + 2] == 's') {
                            std::cout << "Символ '" << input[i + 2] << "' подходит для cos." << '\n';
                            std::cout << "cos операнд." << '\n';
                            is_operation = true;
                            operation = "cos";
                            i = i + 2;
                            prioritet = 4;
                        } else {
                            if (input[i + 2] == 't') {
                                std::cout << "Символ '" << input[i + 2] << "' подходит для cot." << '\n';
                                std::cout << "cot операнд." << '\n';
                                is_operation = true;
                                operation = "cot";
                                i = i + 2;
                                prioritet = 4;
                            }
                            else {
                                std::cout << "Символ '" << input[i + 2] << "'. Не подходит для cos и cot." << '\n';
                                std::cout << "ОШИБКА ВВОДА" << '\n';
                                return "ОШИБКА ВВОДА";
                            }
                        }
                    } else {
                        std::cout << "Символ '" << input[i + 1] << "'. Не подходит для cos и cot." << '\n';
                        std::cout << "ОШИБКА ВВОДА" << '\n';
                        return "ОШИБКА ВВОДА";
                    }
                }

                else if (input[i] == 't') {
                    std::cout << "Символ '" << input[i] << "'. Провека следующего символа для tan." << '\n';
                    if (input[i + 1] == 'a') {
                        std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для tan."
                                  << '\n';
                        if (input[i + 2] == 'n') {
                            std::cout << "Символ '" << input[i + 2] << "' подходит для tan" << '\n';
                            std::cout << "tan операнд." << '\n';
                            is_operation = true;
                            operation = "tan";
                            i = i + 2;
                            prioritet = 4;
                        } else {
                            std::cout << "Символ '" << input[i + 2] << "'. Не подходит для tan." << '\n';
                            std::cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        std::cout << "Символ '" << input[i + 1] << "'. Не подходит для tan." << '\n';
                        std::cout << "ОШИБКА ВВОДА" << '\n';
                        return "ОШИБКА ВВОДА";
                    }
                }


                else if (input[i] == 'l') {
                    std::cout << "Символ '" << input[i] << "'. Провека следующего символа для log и ln." << '\n';
                    if (input[i + 1] == 'o') {
                        std::cout << "Символ '" << input[i + 1] << "'. Проверка последнего символа для log."
                                  << '\n';
                        if (input[i + 2] == 'g') {
                            std::cout << "Символ '" << input[i + 2] << "' подходит для log." << '\n';
                            std::cout << "log операнд." << '\n';
                            is_operation = true;
                            operation = "log";
                            prioritet = 5;
                            i = i + 2;
                        } else {
                            std::cout << "Символ '" << input[i + 2] << "'. Не подходит для log." << '\n';
                            std::cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        if (input[i + 1] == 'n') {
                            std::cout << "ln операнд." << '\n';
                            is_operation = true;
                            operation = "ln";
                            prioritet = 5;
                            i = i + 1;
                        }
                        else {
                            std::cout << "Символ '" << input[i + 1] << "'. Не подходит для log и ln." << '\n';
                            std::cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }
                    }
                }
                //
            }

            if (is_operation) {
                std::cout << "Operation " << operation << " (" << prioritet << ")" << '\n';
                if (stak.size() == 0) {
                    stak.push(operation);
                    priorites.push(prioritet);
                    continue;
                }
                else {
                    while (priorites.top() >= prioritet && stak.size()>0 && priorites.size()>0) {
                        output_line.push_back(stak.top());
                        priorites.pop();
                        stak.pop();
                        if (priorites.size() == 0) {
                            break;
                        }
                    }
                    stak.push(operation);
                    priorites.push(prioritet);
                }
            }// 5+4+sin(pi)^(ln(e)-log(2e))
            else {
                bool is_operand = false;
                if (input[i] == 'p') {
                    std::cout << "Символ '" << input[i] << "'. Провека следующего символа для pi." << '\n';
                    if (input[i + 1] == 'i') {
                        std::cout << "pi операнд." << '\n';
                        operation = "pi!";
                        i = i + 1;
                        is_operand = true;
                    }
                    else {
                        std::cout << "Символ '" << input[i + 1] << "'. Не подходит для pi." << '\n';
                        std::cout << "ОШИБКА ВВОДА" << '\n';
                        return "ОШИБКА ВВОДА";
                    }
                }

                else if (input[i] == 'e') {
                    std::cout << "e операнд." << '\n';
                    operation = "exp!";
                    is_operand = true;
                }

                else {
                    std::vector <char> numbers;
                    int counter = 0;
                    bool have_point = false;

                    while ((input[i + counter] >= '0' && input[i + counter] <= '9') || input[i + counter] == '.') {
                        std::cout << "Символ '" << input[i + counter] << "'. Провека следующего символа на число." << '\n';
                        numbers.push_back(input[i + counter]);

                        if (have_point) {
                            std::cout << "Символ '" << input[i + 1] << "'. Уже был." << '\n';
                            std::cout << "ОШИБКА ВВОДА" << '\n';
                            return "ОШИБКА ВВОДА";
                        }

                        if (input[i + counter] == '.') {
                            have_point = true;
                        }

                        counter ++;
                        if (i + counter == input.size()) {
                            break;
                        }
                    }

                    if (!numbers.empty()) {
                        std :: string str(numbers.begin(), numbers.end());
                        std :: cout << str << std :: endl;
                        i = i + counter - 1;
                        operation = str + "!";
                        is_operand = true;
                    }

                }

                if (is_operand) {
                    output_line.push_back(operation);
                }
                else {
                    std :: cout << "А я хуй знает че тут происходит";
                    std::cout << "Символ '" << input[i + 1] << "'." << '\n';
                    std::cout << "ОШИБКА ВВОДА" << '\n';
                    return "ОШИБКА ВВОДА";
                }
            }
        }

        if (i == input.size() - 1) {
            std::cout << "Считал конец строки." << '\n';
            while (!stak.empty()) {
                std::cout << "Стэк не пуст. Переношу '" << stak.top() << "'в выходную строку." << '\n';
                output_line.push_back(stak.top());
                stak.pop();
            }
        }
    }

    result = std::accumulate(output_line.begin(), output_line.end(), std::string());

    return result;
}