#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    while (true) {
        cout << (" Доступные данному калькулятору действия: \n\n1) Сложение двух чисел \n2) Вычитание одного числа из другого \n3) Деление одного числа на другое \n4) Умножение одного числа на другое \n5) Возведение числа в степень\n6) Нахождение квадратного корня из числа\n7) нахождение одного процента из числа\n8) Нахождение факториала из числа\n9) Выход из программы\n");
        cout << ("Введите цифровое значение операции для ее инициации:");
        int actionChoice;
        cout << "\nВведите цифровое значение выбранного действия: ";
        cin >> actionChoice;

        switch (actionChoice) {
        case 1: {
            cout << "Введите первое число: ";
            string snum1;
            cin >> snum1;
            cout << "\nВведите второе число: ";
            string snum2;
            cin >> snum2;
            if (snum1.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else if (snum2.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else
            {
                double num1 = atof(snum1.c_str());
                double num2 = atof(snum2.c_str());
                double result1 = num1 + num2;
                cout << "Результат сложения двух веденных чисел равен " << result1 << "\n\n";
            }
            break;
        }

        case 2: {
            cout << "Введите первое число (уменьшаемое): ";
            string snum3;
            cin >> snum3;
            cout << "Введите второе число (вычитаемое): ";
            string snum4;
            cin >> snum4;
            if (snum3.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else if (snum4.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else
            {
                double num3 = atof(snum3.c_str());
                double num4 = atof(snum4.c_str());
                double result2 = num3 - num4;
                cout << "Результат вычитания двух веденных чисел равен " << result2 << "\n\n";
            }
            break;
        }

        case 3: {
            cout << "Введите первое число (делимое): ";
            string snum5;
            cin >> snum5;
            cout << "Введите второе число (делитель): ";
            string snum6;
            cin >> snum6;
            if (snum5.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else if (snum6.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else
            {
                double num5 = atof(snum5.c_str());
                double num6 = atof(snum6.c_str());
                if (num6 != 0)
                {
                    double result2 = num5 / num6;
                    cout << "Результат деления двух веденных чисел равен " << result2 << "\n\n";
                    break;
                }
                else
                {
                    cout << "На ноль делить нельзя";
                }
            }
        }

        case 4: {
            cout << "Введите первое числo: ";
            string snum5;
            cin >> snum5;
            cout << "Введите второе число: ";
            string snum6;
            cin >> snum6;
            if (snum5.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else if (snum6.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else {
                double num5 = atof(snum5.c_str());
                double num6 = atof(snum6.c_str());
                double result2 = num5 * num6;
                cout << "Результат умножения двух веденных чисел равен " << result2 << "\n\n";
                break;
            }
        }
        case 5: {
            cout << "Введите первое числo: ";
            string snum5;
            cin >> snum5;
            cout << "Введите второе число (степень): ";
            string snum6;
            cin >> snum6;
            if (snum5.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else if (snum6.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else {
                double num5 = atof(snum5.c_str());
                double num6 = atof(snum6.c_str());
                double result2 = pow(num5, num6);
                cout << "Результат возведения числа в заданную степень: " << result2 << "\n\n";
                break;
            }
        }


        case 6: {
            cout << "Введите числo под корнем: ";
            string snum5;
            if (snum5.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else {
                double num5 = atof(snum5.c_str());
                double result = sqrt(num5);
                cout << "Квадратный корень введенного числа равен: " << result << "\n\n";
                break;
            }
        }
        case 7: {
            cout << "Введите числo: ";
            string snum5;
            if (snum5.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else {
                double num5 = atof(snum5.c_str());
                double result = num5 / 100;
                cout << "Один процент от введенного числа равен: " << result << "\n\n";
                break;
            }
        }
        case 8: {
            cout << "Введите числo: ";
            string snum5;
            if (snum5.empty())
            {
                cout << ("вы ввели пустое значение. попытайтесь вести что-то другое\n\n");
            }
            else {
                long double num5 = atof(snum5.c_str());

                int i;
                int result;
                result = 1;
                for (i = 1; i <= num5; i++) {
                    result = result * i;
                }
                cout << "Факториал введенного числа равен: " << result << "\n\n";
                break;
            }
        }
        case 9: {
            return 0;
        }
        default: {
            cout << "введенное значение не соответсвует существующим операциям калькулятора";
        }
        }

    }
    
}

