/*
Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.
Note: The format zig-zag array in form a < b > c < d > e < f.
*/
#include <iostream>
using namespace std;

int maximum(int arr[], int size)
{
    int sum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > sum)
        {
            sum = arr[i];
        }
    }
    return sum;
}

void sort(int arr[], int size)
{
    int max = 0;
    int order[size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] < arr[max])
            {
                max = j;
            }
        }
        order[i] = arr[max];
        arr[max] = maximum(arr, size);
    }
    for (int i = 1; i < size - 1; i = i + 2)
    {
        int temp = order[i];
        order[i] = order[i + 1];
        order[i + 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << order[i] << " ";
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
