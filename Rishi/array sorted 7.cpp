/*
write a C++ program to rearrange a given sorted array of positive integers . 
Note: In final array, first element should be maximum value, second minimum value,
 third second maximum value , fourth second minimum value, fifth third maximum and so on.
*/
#include <iostream>
using namespace std;

int minimum(int arr[], int size)
{
    int sum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < sum)
        {
            sum = arr[i];
        }
    }
    return sum;
}

void largest(int arr[], int size)
{
    int order[size];
    int a;
    for (int j = 0; j < size; j++)
    {
        int sum = 0;

        for (int i = 0; i < size; i++)
        {

            if (arr[i] > sum)
            {
                sum = arr[i];
                a = i;
            }
        }
        arr[a] = minimum(arr, size);
        order[j] = sum;
    }
    int j = size - 1;
    for (int i = 0; i <= size / 2; i++)
    {
        cout << order[i] << " ";
        if (j > size / 2)
        {
            cout << order[j] << " ";
            j--;
        }
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

    largest(arr, size);

    return 0;
}
