//Convert the array - rearrange its elements in such a way that at first
//all elements equal to zero were located, and then all others.

#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 15;
    double arr[SIZE];
    srand(time(NULL));
    for ( int i = 0; i < SIZE; i++)
    {
        double a = rand() % 30;//random numbers from 0 to 30
        double b = 0.10 * a;//convert the number to a fraction so that there is a digit after the period
        arr[i] = b;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]  < 1)
        {
            cout << arr[i] << " ";//output of the first (smaller) half of the array
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] >= 1)
        {
            cout << arr[i] << " ";//output of the second (bigger) half of the array
        }
    }
}
