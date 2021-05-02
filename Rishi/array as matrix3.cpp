//multiply  matrix of same order
#include <iostream>
using namespace std;

void enter(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
}

void display(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];
    cout << "Enter array number 1: " << endl;
    enter(arr);
    cout << "Enter array number 2: " << endl;
    enter(arr2);
    cout << "Array 1 is: " << endl;
    display(arr);
    cout << "Array 2 is: " << endl;
    display(arr2);
    cout << "Multiplication  of two arrays is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    display(arr3);

    return 0;
}
