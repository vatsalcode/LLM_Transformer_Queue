/*
Write a program to shift every element of an array to circularly left. E.g.-
INPUT : 1 2 3 4 5
OUTPUT : 2 3 4 5 1
*/
#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i <size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size-1] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Specify size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    sort(arr, size);

    return 0;
}
