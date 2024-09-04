// practical_work.cpp

#include <iostream>
#include<windows.h>

using namespace std;

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divis(int a, int b) { return (float)a / (float)b; }

int main()
{
    while (true) {
        setlocale(LC_ALL, "RU");
        char action;
        float result;
        int n1, n2;

        //Введение и выбор действия
        cout << " > Приветствую в лучшем калькуляторе на планете!\n > Введите цифру нужной функции:";
        cout << R"(
1. Сложение
2. Вычитание
3. Умножение
4. Деление
 > )";
        cin >> action;

        system("cls");
        cout << " > ( ! Прием только целочисленных чисел ! )" << endl;
        cout << " > Введите первое число: "; cin >> n1;
        cout << " > Введите второе число: "; cin >> n2;

        switch (action)
        {
        case '1':
            result = sum((int)n1, (int)n2);
            break;
        case '2':
            result = sub((int)n1, (int)n2);
            break;
        case '3':
            result = mul((int)n1, (int)n2);
            break;
        case '4':
            result = divis((int)n1, (int)n2);
            break;
        }

        cout << " > Результат: " << result << endl;

        system("pause");
        system("cls");
    }
}