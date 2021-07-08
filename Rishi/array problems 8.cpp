/*
Write a C++ program to move all negative elements of an array of integers to the end of the array without
 changing the order of positive element and negative element.
*/
#include <iostream>
using namespace std;

int negative(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    return count;
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
    int a = negative(arr, size), b = size - a;
    int positive_array[b], negative_array[a], j = 0, k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative_array[j] = arr[i];
            j++;
        }
        else
        {
            positive_array[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < b; i++)
    {
        cout << positive_array[i] << " ";
    }
    for (int i = 0; i < a; i++)
    {
        cout << negative_array[i] << " ";
    }

    return 0;
}
