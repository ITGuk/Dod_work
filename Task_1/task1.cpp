//Çì³íèòè ïîðÿäîê ðîçì³ùåííÿ åëåìåíò³â â ìàñèâ³ íà çâîðîòíèé.
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
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
