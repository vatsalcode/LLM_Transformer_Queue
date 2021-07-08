//Generate Subarrays using recusrions
#include <iostream>
using namespace std;

void display(int arr[], int size, int c)
{
    if (c > size)
    {
       exit(0);
    }

    for (int j = 0; j <= size - c; j++)
    {
        for (int k = j; k < c + j; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    display(arr, size, c + 1);
}

int main()
{
    int size;
    cout << "Specify ize of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number: " << i + 1 << ": ";
        cin >> arr[i];
    }
    display(arr, size, 1);
    return 0;
}
