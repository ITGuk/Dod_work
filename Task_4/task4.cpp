//����������� ����� � ����������� ������ ���� �������� ����� �����, ��� ��������
//��������������� �� ��������, ��� ����, � ���� � �� ����.

#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 15;
    double arr[SIZE];
    srand(time(NULL));
    for ( int i = 0; i < SIZE; i++)
    {
        double a = rand() % 30;//������� ����� �� 0 �� 30
        double b = 0.10 * a;//��������� ����� � ������ ��� ���� ����� ���� ������
        arr[i] = b;
        cout << arr[i] << " ";//���� ��������� �����
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]  < 1)
        {
            cout << arr[i] << " ";//���� ����� �������� ������(�����)
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] >= 1)
        {
            cout << arr[i] << " ";//���� ����� �������� ������ (�����)
        }
    }
}