#include <iostream>
#include "Complex1.h"
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

int SECOND(){
    ifstream file;
    file.open("text.txt");
    if (!file.is_open()){
        cerr << "ERROR!\n";
    }
    else {
        cout << "Файл открыт!\n" << endl;

        float buffer, max = INT16_MIN;
        int index;
        file >> buffer;
        int num = buffer;
        cout << "Кол-во комплексных чисел: " << num << '\n';
        R* p = new R[num];
        for (int i = 0; i < num; i++) {
            file >> buffer;
            p[i].x = buffer;
            file >> buffer;
            p[i].y = buffer;
            if (p[i].y >= 0)
                cout << i + 1 << " число: " << p[i].x << "+" << p[i].y << "*i" << '\n';
            else
                cout << i + 1 << " число: " << p[i].x << p[i].y << "*i" << '\n';
            if (sqrt(p[i].x * p[i].x + p[i].y * p[i].y) > max) {
                max = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
                index = i;
            }
        }
        if (p[index].y >= 0)
            cout << "Комплексное число с максимальным модулем: " << p[index].x << " + " << p[index].y << "*i\nМодуль равен: " << max << endl;
        else
            cout << "Комплексное число с максимальным модулем: " << p[index].x << p[index].y << "*i\nМодуль равен: " << max << endl;
    }
    file.close();
}

