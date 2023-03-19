//Стиснути масив, видаливши з нього всі елементи, модуль яких не перевищує одиниці.
//Елементи, що звільнилися в кінці масиву, заповнити нулями.
#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 15;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        if (i <= 9)
        {
            arr[i] = i;//присвоєння якщо елемент менше ніж 9
        }
        else
        {
            arr[i] = 0;//заміна на ноль якщо елемент більше ніж одиниці
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";//вивід
    }
}