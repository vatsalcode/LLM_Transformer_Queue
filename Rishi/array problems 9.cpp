/*
Write a C++ program to find and print all common elements in three sorted arrays of integers
*/
#include <iostream>
using namespace std;

void enter(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
}
int main()
{
    int size;
    cout << "Specify size: ";
    cin >> size;
    int arr1[size], arr2[size], arr3[size];
    cout << "Enter element of array number 1 " << endl;
    enter(arr1, size);
    cout << "Enter element of array number 2 " << endl;
    enter(arr2, size);
    cout << "Enter element of array number 3 " << endl;
    enter(arr3, size);
    cout << "Common elements are: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            for (int k = 0; k < size; k++)
            {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
                {
                    cout << arr3[k] << " ";
                }
            }
        }
    }

    return 0;
}
