#include <iostream>
using namespace std;

int *sumarr(int arr1[], int arr2[], int arrsum[], int size)
{
    if (size == -1)
    {
        return arrsum;
    }

    else
    {
        arrsum[size] = arr1[size] + arr2[size];
        size--;
        return sumarr(arr1, arr2, arrsum, size);
    }
}

int main()
{
    int size1, size2;
    cout << "Enter size of array 1" << endl;
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements in array 1" << endl;
    for (int x = 0; x < size1; x++)
    {
        cin >> arr1[x];
    }

    cout << "Enter size of array 2" << endl;
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements in array 2" << endl;
    for (int x = 0; x < size2; x++)
    {
        cin >> arr2[x];
    }

    if (size1 > size2)
    {
        int arrSum[size2];
        arrSum[size2] = *sumarr(arr1, arr2, arrSum, size2 - 1);
        for (int x = 0; x < size2; x++)
        {
            cout << arrSum[x] << "  ";
        }
        for (int x = size2; x < size1; x++)
        {
            cout << arr1[x] << "  ";
        }
    }
    else if (size2 > size1)
    {
        int arrSum[size1];
        arrSum[size1] = *sumarr(arr1, arr2, arrSum, size1 - 1);
        for (int x = 0; x < size1; x++)
        {
            cout << arrSum[x] << "  ";
        }
        for (int x = size1; x < size2; x++)
        {
            cout << arr2[x] << "  ";
        }
    }
    else
    {
        int arrSum[size1];
        arrSum[size1] = *sumarr(arr1, arr2, arrSum, size1 - 1);
        for (int x = 0; x < size1; x++)
        {
            cout << arrSum[x] << "  ";
        }
    }

    return 0;
}
