//������� �� �䒺�� �������� ������ �� ���������� 
//� ������������ �������� ������ �� ����������.

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 15;
    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int a = rand() % 20 - 10;//������� ����� �� -10 �� 10
        arr[i] = a;
        cout << arr[i] << " ";//���� ������ � ���������� �������
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] *= -1;//������ ����� � ������� �� ������
        }
    }
    for (int j = 0; j < SIZE; j++)
    {
        arr[j] *= 3;//�������� �� ��������
        cout << arr[j] << " ";//�������� ������ � ������� � �������
    }
    int temp = 0;//��������� ����� ��� ������� ���� ��������
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                //���������� �� ����������
            }
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";//���� �������� ������
    }
}
