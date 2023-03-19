//Замінити всі від’ємні елементи масиву їх квадратами 
//і впорядкувати елементи масиву за зростанням.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 15;
    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int a = rand() % 20 - 10;//рандомні числа від -10 до 10
        arr[i] = a;
        cout << arr[i] << " ";//вивід масива з рандомними числами
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] *= -1;//міняємо число з відємного на додатнє
        }
    }
    for (int j = 0; j < SIZE; j++)
    {
        arr[j] *= 3;//підводимо до квадрату
        cout << arr[j] << " ";//виводимо массив з числами в квадраті
    }
    int temp = 0;//тимчасова змінна для порівння двох елементів
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //сортування за зростанням
            }
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";//Вивід готового масиву
    }
}
