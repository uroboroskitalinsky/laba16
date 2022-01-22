//
//  main.cpp
//  VVP16
//
//  Created by Роберт Скиталинский on 19.01.2022.
//
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

void First()
{
    int n;
    vector <int> arr;
    cout << "Введите N(>0):";
    cin >> n;
    cout << "Положительные нечётные числа: " << endl;
    for (int i = 0; i != n * 2; i++)
    {
        if (i % 2 == 1)
        {
            arr.push_back(i);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " "<< endl;
    }
}

void Second()
{
    int n = 0, a, d, k = 1;
    vector <int> arr;
    cout << "Введите N:";
    cin >> n;
    cout << "Введите первый член А:";
    cin >> a;
    cout << "Введите знаминатель геометрической прогрессии D:";
    cin >> d;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = a * pow(d, k);
        k++;
    }
    cout << "Геометрическая прогрессия:" << a << " ";
    for (int i = 1; i < arr.size(); i++)
    {
        cout << arr[i] << " " << endl;
    }
}

void Third()
{
    int n, a, b;
    vector <int> arr;
    cout << "Введите размер массива N:";
    cin >> n;
    cout << "Введите первый элемент А:";
    cin >> a;
    cout << "Введите второй элемент В:";
    cin >> b;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    arr[0] = a;
    arr[1] = b;
    arr[2] = a + b;
    a = a + b;
    for (int i = 3; i < arr.size(); i++)
    {
        arr[i] = a * 2;
        a = arr[i];
    }
    cout << "Массив:";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " " << endl;
    }
}

void Fourth()
{
    int n;
    vector <int> arr;
    cout << "Введите размер массива:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    int k = n - 1;
    cout << "Вывод массива:" << endl;
    for (int i = 0; i < arr.size() / 2; i++)
    {
        cout << arr[i] << " " << arr[k] << " " << endl;
        k--;
    }
    if (n % 2 != 0)
    {
        cout << arr[n / 2] << endl;
    }
}

void Fifth()
{
    int n;
    vector <int> arr;
    cout << "Введите размер массива:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        arr.push_back(i);
    }
    cout << endl << "Нечетные числа в массиве:";
    for (int i = n; i >= 0; i--)
    {
        if (i % 2 == 1)//necehet
        {
            cout << arr[i] << " ";
        }
    }
    cout << "Чётные числа в массиве:";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)//chentie
        {
            cout << arr[i] << " " << endl;
        }
    }
}
void Error()
{
    cout << "incorrect number\n" << endl;
}

int main()
{
    while (true) {
        int n;
        cout << "   Выберете номер задачи (нажмите 0 для выхода)\n"
            << "   1) Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, .\n"
            << "   2) Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . \n"
            << "   3) Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих\n"
            << "   4) Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,\n"
            << "   5) Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров\n";

        cin >> n;
        if (n == 1)
        {
            First();
        }
        else if (n == 2)
        {
            Second();
        }
        else if (n == 3)
        {
            Third();
        }
        else if (n == 4)
        {
            Fourth();
        }
        else if (n == 5)
        {
            Fifth();
        }
        else if (n == 0)
        {
            break;
        }
        else
        {
            Error();
        }

    }
    return 0;
}
