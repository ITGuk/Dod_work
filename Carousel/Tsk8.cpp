
#include <iostream>
using namespace std;

int main()
{
    //DecrementingCarousel
    int size = 4;
    int* arr = new int[size] {8, 4, 3, 5, 1, };
    int con = 5;
    int vubir1;
    int vubir2;
    int vubir3;
    int num;
    bool cors = false;
    cout << "\tDecrementing Carousel" << endl;
    while (true)
    {
        cout << "\tIf you want to: " << endl;
        cout << "Press 1 - fill an array" << endl;
        cout << "Press 2 - launch the carousel" << endl;
        cout << "Press 0 - To Exit" << endl;
        cin >> vubir1;
        if (vubir1 > 0 && vubir1 < 3)
            if (vubir1 == 1)
            {
                cout << "Array: ";
                for (int i = 0; i < size || arr[i] == 0; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl << endl;
                cout << "Press 1 - fill an array: ";
                cin >> vubir2;
                cout << endl;
                if (vubir2 == 1)
                {
                    while (true)
                    {
                        for (int i = 0; i < size || arr[i] == 0; i++)
                        {
                            cout << arr[i] << " ";
                        }
                        cout << "Add more item? 1 - YES 2 - NO ";
                        cin >> vubir3;

                        if (vubir3 == 1)
                        {
                            if (size < 8)
                            {
                                cout << "Press num: ";
                                cin >> num;
                                cout << endl;
                                arr[size] = num;
                                size++;
                                continue;
                            }
                            else {
                                cout << endl << "You array is full!" << endl << endl;
                                break;
                            }
                        }
                        if (vubir3 == 2)
                        {
                            break;
                        }
                    }
                }
            }
        if (vubir1 == 2)
        {
            cout << "Array: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            while (true)
            {
                cout << endl;
                cout << "Next Press - 1 | Break Press - 2: ";
                int vubir4;
                cin >> vubir4;
                cout << endl;
                if (vubir4 == 1)
                {
                    for (int i = 0; i < size; i++)
                    {
                        arr[i] = arr[i + 1];
                        cout << arr[i] << " ";
                    }
                    --size;
                    continue;
                }
                if (vubir4 == 2)
                {
                    break;
                }

            }


        }
        if (vubir1 == 0)
        {
            break;
        }
        if (vubir1 < 0 || vubir1 > 3)
        {
            cout << endl << "There is no such function! " << endl << endl;
            continue;
        }
    }

    cout << endl;
}

