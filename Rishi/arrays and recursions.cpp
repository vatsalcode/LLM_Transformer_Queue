//To find sum of arrays using recursions
#include <iostream>
using namespace std;

void input(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sum(int arr1[], int arr2[], int arr3[], int c , int size)
{
    if (c != size)
    {
        arr3[c] = arr2[c] + arr1[c];
        cout << arr3[c] << " ";
        sum(arr1, arr2, arr3, c + 1, size);
    }
}

int main()
{
    int size;
    cout << "Specify size of arrays: ";
    cin >> size;
    int arr1[size], arr2[size], arr3[size];
    cout << "Enter element of first array" << endl;
    input(arr1, size);
    cout << "Enter element of second array" << endl;
    input(arr2, size);
    cout << endl
         << endl;
    cout << "Array 1: ";
    display(arr1, size);
    cout << "Array 2: ";
    display(arr2, size);
    cout << "Sum: ";
    sum(arr1,arr2,arr3,0,size);
    return 0;
}
