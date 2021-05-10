//To print a array using recursion
#include <iostream>
using namespace std;

void display(int arr[], int c, int size)
{

    if (c < size)
    {
        cout << arr[c] << " ";
        display(arr, c + 1, size);
    }
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number: " << i + 1 << ": ";
        cin >> arr[i];
    }
    display(arr, 0, size);
    return 0;
}
