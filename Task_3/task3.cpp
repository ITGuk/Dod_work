//Compress the array, removing from it all elements whose module is in the interval
//[а, b]. Fill the free elements at the end of the array with zeros.

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 15;
    int arr[SIZE];
    int a = 3;
    int b = 13;

    for (int i = 0; i < SIZE; i++)
    {
        int ran = rand() % 15 + 1;
        if (ran >= a && ran <= b)
        {
            arr[i] = ran;//filling the array with rand numbers, if the rand number is from 3 to 13
        }               //if the number does not match the range then it is replaced by zero
        else
        {
            arr[i] = 0;
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
            }//sorted the array using the bubble method
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
