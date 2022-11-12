#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(0, "");

    ////Задание 1 . Вывести на экран фигуры заполненные звездочками. Диалог с пользователем реализовать при помощи меню.

    /*while (1) {

        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 11;
        int number;
        cout << "Введите цифру от 1 до 10: "; cin >> number;

        switch (number)
        {
        case 1:
            for (int i = 10; i >= 0; i--) {
                for (int l = 0; l <= b * 2; l++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;
        case 2:
            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;
        case 3:

            for (int i = 10; i >= 0; i--) {
                for (int k = 0; k <= b; k++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;

        case 4:
            for (int i = 10; i >= 0; i--) {

                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int k = 0; k <= a; k++) {
                    cout << "* ";
                }
                cout << endl;
                a++;
            }
            break;

        case 5:

            for (int i = 10; i >= 0; i--) {
                for (int k = 0; k <= b; k++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            for (int i = 10; i >= 0; i--) {

                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int k = 0; k <= e; k++) {
                    cout << "* ";
                }
                cout << endl;
                e++;
            }
            break;

        case 6:

            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 10; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 1; i <= 11; i++) {
                for (int k = 0; k <= f * 2; k++) {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                f--;
            }
            for (int i = 10; i >= 0; i--) {
                for (int l = 0; l <= b * 2; l++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;

        case 7:
            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 10; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 8:
            for (int i = 1; i <= 11; i++) {
                for (int k = 0; k <= f * 2; k++) {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                f--;
            }
            for (int i = 10; i >= 0; i--) {
                for (int l = 0; l <= b * 2; l++) {
                    cout << " ";
                }
                for (int j = 0; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
                b++;
            }
            break;

        case 9:
            for (int i = 10; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case 10:
            for (int i = 1; i <= 10; i++) {
                for (int k = 0; k <= f * 2; k++) {
                    cout << " ";
                }
                for (int j = 1; j < i; j++) {
                    cout << "* ";
                }
                cout << endl;
                f--;
            }
            break;

        default:
            if (number < 1 || number > 10) {
                cout << "Ошибка, введите цифру от 1 до 10" << endl;
            }
            break;
        }
    }
    */
    
////Задание 2. Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры
//int a = 0;
//for (int i = 1; i < 10; i++)
//{
//    for (int j = 0; j < 10; j++)
//    {
//        for (int k = 0; k < 10; k++)
//        {
//            if (i == j || k == i || k == j)
//            {
//                a++;
//            }
//        }
//    }
//}
//cout << a << endl;


////Задание 3. Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых есть две одинаковые цифры
//int n1 = 0, n2 = 0, n3 = 0;
//
//int count = 0;
//for (int i = 100; i <= 999; i++)
//{
//    n1 = i / 100;
//    n2 = (i / 10) % 10;
//    n3 = i % 10;
//
//    if (n1 != n2 && n2 != n3 && n1 != n3)
//    {
//        count++;
//    }
//}
//cout << count << endl;


////Задание 4. Пользователь вводит любое целое число. Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран.
//int a, res;
//double sum = 0;
//int k = 0;
//cout << "Введите любое целое число: ";
//cin >> a;
//while (a != 0) {
//    res = a % 10;
//    if (res != 3 && res != 6) {
//        sum += res * pow(10, k);
//        k++;
//    }
//    a /= 10;
//}
//cout << "Число без 3 и 6: " << sum;


////Задание 5. Пользователь вводит любое целое число А. Необходимо вывести все целые числа В, для которых А делиться без остатка на В* В и не делиться без остатка на В* В* В
//int a;
//cin >> a;
//for (int b = 1; b < a; ++b)
//{
//    if (a % (b * b) == 0 and a % (b * b * b) != 0)
//    {
//        cout << b << endl;
//    }
//}

////Задание 6. Пользователь вводит целое число А. Программа должна определить, что куб суммы цифр этого числа равен А*А


////Задание  7. Пользователь вводит целое число. Необходимо вывести все целые числа, на которое заданное число делиться без остатка.
//int num;
//cout << "Введите число";
//cin >> num;
//for (int i = 1; i < num; i++)
//{
//    if (num % i == 0)
//        cout << i << endl;
//}
////Задание  8.
//int num1, num2;
//cout << "Введите 2 числа\n";
//cin >> num1 >> num2;
//int i;
//for (i = 1; i <= num1 && i <= num2; i++) 
//{
//    if (num1 % i == 0 && num2 % i == 0)
//        cout << i << "\n";
//}


//Задание 9: Пользователь вводит число.Определить количество цифр в этом числе, посчитать их сумму и среднее арифметическое.Определить количество нулей в этом числе.Общение с пользователем организовать через меню.
//int a, cp, n = 0, sum = 0, c = 0;
//
//cout << "Введите число:";
//cin >> a;
//cp = a;
//
//while (a)
//{
//    if (a % 10 == 0)
//        c++;
//    a /= 10;
//}
//cout << "\nКол-во нулей: " << c;
//
//for (n = 0; cp > 0; n++)
//{
//    sum += cp % 10;
//    cp /= 10;
//}
//cout << "\nКол-во цифр = " << n << " \nСумма = " << sum << "\nСреднее арифметическое = " << (double)sum / n << "\n";


//Задание 10: Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки.
//int h, a, w;
//cout << "Введите высоту шахматной доски.\nh = ";
//cin >> h;
//cout << "Введите ширину шахматной доски.\nw = ";
//cin >> w;
//cout << "Введите величину ячейки шахматной доски.\na = ";
//cin >> a;
//for (int i = 0; i < h; i++)
//{
//    for (int jj = 0; jj < a; jj++)
//    {
//        for (int j = 0; j < w; j++)
//        {
//            for (int ii = 0; ii < a; ii++)
//            {
//                ((i + j) % 2) ? (cout << '-') : (cout << 'x');
//            }
//        }
//        cout << '\n';
//    }
//}
//cout << "\n\n\n";
}