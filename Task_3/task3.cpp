//Стиснути масив, видаливши з нього всі елементи, модуль яких знаходиться в інтервалі
//[а, b]. Елементи, що звільнилися в кінці масиву, заповнити нулями.

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 15;
    int arr[SIZE];
    int a = 3;//Поч інтервалу
    int b = 13;//Кінець інтервалу

    for (int i = 0; i < SIZE; i++)
    {
        int ran = rand() % 15 + 1;
        if (ran >= a && ran <= b)
        {
            arr[i] = ran;//наповнення массива ранд числами,якщо ранд число від 3 до 13
        }               //якщо число не відопвідає діапазону тоді заміняється нулем
        else
        {
            arr[i] = 0;//заміна на ноль
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    int tim;
    for (int i = 0; i < SIZE - 1; i++) 
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tim = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tim;
            }//відсортували массив методом пузирька
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";//вивід массива
    }

    cout << endl;
}