//finding tranpose
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
    int arr[3][3], transpose[3][3];
    enter(arr);
    cout << "Entered array: " << endl;
    display(arr);
    cout << endl
         << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << "Transpose array: " << endl;
    display(transpose);

    return 0;
}
