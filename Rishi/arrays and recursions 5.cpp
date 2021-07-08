//To find an element in a array using recursion
#include <iostream>
using namespace std;

void index(int arr[], int c, int size, int target)
{
    if (c >= size)
    {
        exit(0);
    }

    if (arr[c] == target)
    {
        cout << "The index of element " << target << " is: " << c << endl;
    }
    else
    {
        index(arr, c + 1, size, target);
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
    int target;
    cout << endl
         << "Enter element whose index is to be known: ";
    cin >> target;

    index(arr, 0, size, target);
    return 0;
}
