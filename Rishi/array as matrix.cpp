// take input of 3*3 matrix and check whether it is symmetric or not
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element of row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    cout << "Entered matrix: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    bool flag = true;
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (arr[i][k] != arr[k][i])
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Symmetric matrix";
    }
    else
    {
        cout << "Non symmetric matrix";
    }

    return 0;
}
