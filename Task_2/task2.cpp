//�������� �����, ��������� � ����� �� ��������, ������ ���� �� �������� �������.
//��������, �� ���������� � ���� ������, ��������� ������.
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
            arr[i] = i;//��������� ���� ������� ����� �� 9
        }
        else
        {
            arr[i] = 0;//����� �� ���� ���� ������� ����� �� �������
        }
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << " ";//����
    }
}