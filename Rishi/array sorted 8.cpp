//Write a C++ program to separate even and odd numbers of an array of integers.
//Put all even numbers first, and then odd numbers
#include <iostream>
using namespace std;

int odd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
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
    int a = odd(arr, size), b = size - a;
    int even[b], odd[a], j = 0, k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < b; i++)
    {
        cout << even[i] << " ";
    }
    for (int i = 0; i < a; i++)
    {
        cout << odd[i] << " ";
    }

    return 0;
}
