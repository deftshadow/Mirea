#include "Colculations.h"


int EXPRESSION(){
    std :: cout << "Руководство" << std :: endl;
    std :: cout << "" << std :: endl;
    std :: cout << "1. Возможные функции" << std :: endl;
    std :: cout << "    sin" << std :: endl;
    std :: cout << "    cos" << std :: endl;
    std :: cout << "    tan" << std :: endl;
    std :: cout << "    cot" << std :: endl;
    std :: cout << "    ln" << std :: endl;
    std :: cout << "    log" << std :: endl;
    std :: cout << "2. Возможные константы" << std :: endl;
    std :: cout << "    pi" << std :: endl;
    std :: cout << "    e" << std :: endl;
    std :: cout << "3. Возможные операции" << std :: endl;
    std :: cout << "    +" << std :: endl;
    std :: cout << "    -" << std :: endl;
    std :: cout << "    *" << std :: endl;
    std :: cout << "    /" << std :: endl;
    std :: cout << "    ^" << std :: endl;
    std :: cout << "4. Каждую функцию отдельно брать в скобочки, если больше одной." << std :: endl;
    std :: cout << "    Пример" << std :: endl;
    std :: cout << "    Правильно   (ln(e))+3^(1+1)" << std :: endl;
    std :: cout << "    Неправильно ln(e)+3^(1+1)" << std :: endl;
    std :: cout << "5. Не ставить пробелы." << std :: endl;
    std :: cout << "    Пример" << std :: endl;
    std :: cout << "    Правильно   (ln(e))+3^(1+1)" << std :: endl;
    std :: cout << "    Неправильно ( ln(e) ) + 3 ^ (1 + 1)" << std :: endl;
    std :: cout << "" << std :: endl;
    std :: cout << "" << std :: endl;
    std :: string input;
    std :: string answer;
    std :: cout << "Ввод        ";
    std :: cin >> input;
    std :: cout << "Польская    " << str_to_pol(input) << std :: endl;
    std :: cout << "Результат   " << pol_to_answer(str_to_pol(input)) << std :: endl;
    return 0;
}




double pol_to_answer(std::string pol) {
    double result = 0;

    std :: istringstream iss(pol);
    std :: vector <double> stak;

    do
    {
        std :: string subs;
        iss >> subs;

        if (isdigit(subs[0])) {
            stak.push_back(atof(subs.c_str()));
        }
        else if (subs == "pi") {
            stak.push_back(M_PI);
        }
        else if (subs == "e") {
            stak.push_back(M_E);
        }
        else {
            double temp_result;

            if (subs == "sin" || subs == "cos" || subs == "tan" || subs == "cot" || subs == "ln" || subs == "log") {
                double temp_num = stak.back();
                stak.pop_back();

                if (subs == "sin") {
                    temp_result = sin(temp_num);
                }
                else if (subs == "cos") {
                    temp_result = cos(temp_num);
                }
                else if (subs == "tan") {
                    temp_result = tan(temp_num);
                }
                else if (subs == "cot") {
                    temp_result = cos(temp_num)/sin(temp_num);
                }
                else if (subs == "ln") {
                    temp_result = log(temp_num);
                }
                else if (subs == "log") {
                    temp_result = log10(temp_num);
                }
                temp_result = round( temp_result / accuracy ) * accuracy;
                stak.push_back(temp_result);
            }
            else {
                if (subs == "+" || subs == "-" || subs == "*" || subs == "/" || subs == "^") {
                    double temp_num2 = stak.back();
                    stak.pop_back();
                    double temp_num1 = stak.back();
                    stak.pop_back();

                    if (subs == "+") {
                        temp_result = temp_num1 + temp_num2;
                    }
                    else if (subs == "-") {
                        temp_result = temp_num1 - temp_num2;
                    }
                    else if (subs == "*") {
                        temp_result = temp_num1 * temp_num2;
                    }
                    else if (subs == "/") {
                        temp_result = temp_num1 / temp_num2;
                    }
                    else if (subs == "^") {
                        temp_result = pow(temp_num1,temp_num2);
                    }
                    temp_result = round( temp_result / accuracy ) * accuracy;
                    stak.push_back(temp_result);
                }
            }
        }
    } while (iss);

    result = stak[0];

    return result;
}





std::string str_to_pol(std::string input) {
    std::string result = "None";

    std::stack <std::string> stak;
    std::stack <int> priorites;
    std::vector<std::string> output_line;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            //output_line.push_back("( ");
            stak.push("( ");
            priorites.push(0);
        } else if (input[i] == ')') {
            while (stak.top() != "( ") {
                output_line.push_back(stak.top());
                stak.pop();
            }
            stak.pop();
            //output_line.push_back(") ");
        } else {
            bool is_operation = false;
            std :: string operation;
            int prioritet = 0;
            if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^') {
                is_operation = true;
                operation = input[i];
                operation += " ";
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
                    if (input[i + 1] == 'i') {
                        if (input[i + 2] == 'n') {
                            is_operation = true;
                            operation = "sin ";
                            prioritet = 4;
                            i = i + 2;
                        } else {
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        return "ОШИБКА ВВОДА";
                    }
                }
                else if (input[i] == 'c') {
                    if (input[i + 1] == 'o') {
                        if (input[i + 2] == 's') {
                            is_operation = true;
                            operation = "cos ";
                            i = i + 2;
                            prioritet = 4;
                        } else {
                            if (input[i + 2] == 't') {
                                is_operation = true;
                                operation = "cot ";
                                i = i + 2;
                                prioritet = 4;
                            }
                            else {
                                return "ОШИБКА ВВОДА";
                            }
                        }
                    } else {
                        return "ОШИБКА ВВОДА";
                    }
                }
                else if (input[i] == 't') {
                    if (input[i + 1] == 'a') {
                        if (input[i + 2] == 'n') {
                            is_operation = true;
                            operation = "tan ";
                            i = i + 2;
                            prioritet = 4;
                        } else {
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        return "ОШИБКА ВВОДА";
                    }
                }


                else if (input[i] == 'l') {
                    if (input[i + 1] == 'o') {
                        if (input[i + 2] == 'g') {
                            is_operation = true;
                            operation = "log ";
                            prioritet = 5;
                            i = i + 2;
                        } else {
                            return "ОШИБКА ВВОДА";
                        }
                    } else {
                        if (input[i + 1] == 'n') {
                            is_operation = true;
                            operation = "ln ";
                            prioritet = 5;
                            i = i + 1;
                        }
                        else {
                            return "ОШИБКА ВВОДА";
                        }
                    }
                }
            }
            if (is_operation) {
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
            }
            else {
                bool is_operand = false;
                if (input[i] == 'p') {
                    if (input[i + 1] == 'i') {
                        operation = "pi ";
                        i = i + 1;
                        is_operand = true;
                    }
                    else {
                        return "ОШИБКА ВВОДА";
                    }
                }
                else if (input[i] == 'e') {
                    is_operand = true;
                    operation = "e ";
                }
                else {
                    std::vector <char> numbers;
                    int counter = 0;
                    bool have_point = false;
                    while ((input[i + counter] >= '0' && input[i + counter] <= '9') || input[i + counter] == '.') {
                        numbers.push_back(input[i + counter]);
                        if (input[i + counter] == '.') {
                            if (have_point) {
                                return "ОШИБКА ВВОДА";
                            }
                            else {
                                have_point = true;
                            }
                        }
                        counter ++;
                        if (i + counter == input.size()) {
                            break;
                        }
                    }
                    if (!numbers.empty()) {
                        std :: string str(numbers.begin(), numbers.end());
                        i = i + counter - 1;
                        operation = str + " ";
                        is_operand = true;
                    }
                }
                if (is_operand) {
                    output_line.push_back(operation);
                }
                else {
                    return "ОШИБКА ВВОДА";
                }
            }
        }
        if (i == input.size() - 1) {
            while (!stak.empty()) {
                output_line.push_back(stak.top());
                stak.pop();
            }
        }
    }
    result = std::accumulate(output_line.begin(), output_line.end(), std::string());
    return result;
}













