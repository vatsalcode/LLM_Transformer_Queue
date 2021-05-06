/*
Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing
the highest value. Split the element into two parts where first part contains the next highest value in the array
and second part hold the required additive entity to get the highest value. Print the array where the highest
value get splitted into those two parts.
Sample input: 4 8 6 3 2
Sample output: 4 6 2 6 3 2
*/
#include <iostream>
using namespace std;

int highest(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sum)
        {
            sum = arr[i];
        }
    }
    return sum;
}

int second_highest(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > sum && arr[i] < highest(arr, size))
        {
            sum = arr[i];
        }
    }
    return sum;
}

int index(int arr[], int size)
{
    int a = highest(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (a == arr[i])
        {
            return i;
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
    int arr1[size + 1];
    int a = highest(arr, size), b = second_highest(arr, size), c = index(arr, size), d = a - b;

    for (int i = 0; i < c; i++)
    {
        arr1[i] = arr[i];
    }
    arr1[c] = b;
    arr1[c + 1] = d;
    for (int i = c + 2; i < size + 1; i++)
    {
        arr1[i] = arr[i - 1];
    }
    cout << "Displaying new array: ";
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
