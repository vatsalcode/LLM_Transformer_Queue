/*
Write a C++ program to update every array element by multiplication of next and previous values of a
 given array of integers
*/
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Specify size: ";
    cin >> size;
    int arr[size], new_array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 1; i < size - 1; i++)
    {
        new_array[i] = arr[i - 1] * arr[i + 1];
    }
    new_array[0] = arr[0] * arr[1];
    new_array[size - 1] = arr[size - 1] * arr[size - 2];

    for (int i = 0; i < size; i++)
    {
        cout << new_array[i] << " ";
    }

    return 0;
}
