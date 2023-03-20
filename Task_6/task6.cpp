//Replace all negative elements of the array with their squares 
//and order the elements of the array in ascending order.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 15;
    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int a = rand() % 20 - 10;
        arr[i] = a;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] *= -1;//change the number from negative to positive
        }
    }
    for (int j = 0; j < SIZE; j++)
    {
        arr[j] *= 3;//round up to a square
        cout << arr[j] << " ";
    }
    int temp = 0;//temporary variable to compare two elements
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //sort by growth
            }
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
}
