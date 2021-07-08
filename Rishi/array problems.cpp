//TO fing no of postive numbers,negative numbers,odd numbers and even numbers

#include <iostream>
using namespace std;

int positive(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int odd(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] / 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout << "Spexify size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << endl
         << "No of positive Integers: " << positive(arr, size) << endl;
    cout << endl
         << "No of negative Integers: " << size - positive(arr, size) << endl;
    cout << endl
         << "No of odd Integers: " << odd(arr, size) << endl;
    cout << endl
         << "No of even Integers: " << size - odd(arr, size) << endl;

    return 0;
}
