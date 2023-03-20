//Change the order of placement of elements in the array to reverse.
#include <iostream>
using namespace std;

int main()
{
    //work 1 
    const int SIZE = 15;
    int arr[SIZE] = {};
    int arr_one[SIZE] = {};
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)//standart
    {
        int ran = rand() % 30 + 1;
        arr[i] = ran;
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = SIZE - 1, j = 0; j < SIZE;)//reverse
    {
        arr_one[j] = arr[i];
        i--;
        j++;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr_one[i] << " ";

    }
}
