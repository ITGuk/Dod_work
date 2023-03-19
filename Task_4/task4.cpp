//Перетворити масив – переставити місцями його елементи таким чином, щоб спочатку
//розташовувалися всі елементи, рівні нулю, а потім – всі інші.

#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 15;
    double arr[SIZE];
    srand(time(NULL));
    for ( int i = 0; i < SIZE; i++)
    {
        double a = rand() % 30;//рандомні числа від 0 до 30
        double b = 0.10 * a;//переводим число в дробне шоб була цифра після крапки
        arr[i] = b;
        cout << arr[i] << " ";//вивід рандомних чисел
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]  < 1)
        {
            cout << arr[i] << " ";//вивід першої половини масива(меншої)
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] >= 1)
        {
            cout << arr[i] << " ";//вивід другої половини масива (більшої)
        }
    }
}