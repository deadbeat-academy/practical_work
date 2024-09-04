// practical_work.cpp

#include <iostream>
#include<windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    cout << " > Приветствую в лучшем калькуляторе на планете!\n > Выберите цифру нужной функции:";
    cout << R"(
    1. Сложение
    2. Вычитание
    3. Умножение
    4. Деление
 > )" << endl;

    system("pause");
}