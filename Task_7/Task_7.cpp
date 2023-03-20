//Convert the array - rearrange its elements so that at first
//all elements that differ from the maximum by no more than 20% were located,
//and then all the others.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 15;
    int arr[SIZE] = {};
    int arr1[SIZE] = {};
    int max = 0;
    int max_ind = 0;//how many numbers are more than the max number - 20%
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int a = rand() % 30 + 1;
        arr[i] = a;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];//finding the maximum number
        }
    }
    cout << "Max num: " << max;
    int vs = (max * 20) / 100;//how much is 20% of the max number
    int vs1 = max - vs;//We subtract the maximum number from the percentages that we got
    cout << endl << "Max num - 20% = " << vs1;

    for (int i = 0, k = 0; i < SIZE; i++)
    {
        if (arr[i] >= vs1)
        {
            arr1[k] = arr[i];//We fill the array with numbers that are not less than max - 20%
            k++;//Counts only when the number is not less than max - 20%
            max_ind++;//In order to know where to start, fill the places in the array with numbers that are smaller
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < vs1)
        {
            arr1[max_ind] = arr[i];//We fill the array with numbers that are less than the max - 20%
            max_ind++;
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {

        cout << arr1[i] << " ";
    }

}
