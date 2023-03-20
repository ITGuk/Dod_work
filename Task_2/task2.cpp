//Compress the array by removing from it all elements whose modulus does not exceed one.
//Fill the freed elements at the end of the array with zeros.
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
            arr[i] = i;//assignment if element is less than 9
        }
        else
        {
            arr[i] = 0;//replace with zero if the element is greater than one
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";
    }
}
