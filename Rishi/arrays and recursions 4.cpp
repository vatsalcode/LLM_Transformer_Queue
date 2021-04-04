//To find sum of elements of array using recursion
#include <iostream>
using namespace std;

int sum(int arr[], int c, int size)
{
    int a;
    if (c < size)
    {
        a = arr[c];
        return a + sum(arr, c + 1, size);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int size;
    cout << "Specify size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The sum of elements of array is: " << sum(arr, 0, size) << endl;
    return 0;
}
