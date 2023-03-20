//Convert the array - rearrange its elements so that in the first half of it
//elements standing in odd positions were placed, and in the second half - elements,
//that stood in even positions.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 15;
    int arr[SIZE] = {};//array from which we take even and odd numbers
    int arr_nepar[SIZE] = {};//temporary array for odd numbers
    int arr_par[SIZE] = {};//temporary array for even numbers
    int zagal[SIZE] = {};//array in which the numbers are already sorted
    if (SIZE % 2 != 0)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = i;
        }

        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << " ";//output of an unsorted array
        }
        cout << endl;
        int j = 0;//counter for going through the cycle of searching for odd numbers
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] % 2 != 0)
            {
                arr_nepar[j] = i;//filling the temporary array with odd elements
                j++;
            }
        }
        int j1 = 0;//counter for going through the cycle of searching for even numbers
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr_par[j1] = i;//filling the temporary array with even elements
                j1++;
            }
        }
        int k = 0;
        for (int i = 0; i < SIZE / 2; i++)
        {
            zagal[k++] = arr_nepar[i];//fill the beginning of the array with odd elements
        }
        for (int i = 0; i <= SIZE / 2; i++)
        {
            zagal[k++] = arr_par[i];//fill the second half of the array with even elements
        }
        for (int i = 0; i < SIZE; i++)
        {
            cout << zagal[i] << " ";
        }
    }
}
