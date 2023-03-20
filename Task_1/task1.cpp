//Change the order of placement of elements in the array to reverse.
#include <iostream>
using namespace std;

int main()
{
    //work 1 
    const int SIZE = 15;
    int arr[SIZE];
    for (int i = 0; i <= SIZE; i++)//standart
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = SIZE; i >= 0; --i) //reverse
    {
        cout << i << " ";
    }
}
