//�������� �����, ��������� � ����� �� ��������, ������ ���� ����������� � ��������
//[�, b]. ��������, �� ���������� � ���� ������, ��������� ������.

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 15;
    int arr[SIZE];
    int a = 3;//��� ���������
    int b = 13;//ʳ���� ���������

    for (int i = 0; i < SIZE; i++)
    {
        int ran = rand() % 15 + 1;
        if (ran >= a && ran <= b)
        {
            arr[i] = ran;//���������� ������� ���� �������,���� ���� ����� �� 3 �� 13
        }               //���� ����� �� ������� �������� ��� ���������� �����
        else
        {
            arr[i] = 0;//����� �� ����
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
            }//����������� ������ ������� ��������
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";//���� �������
    }

    cout << endl;
}