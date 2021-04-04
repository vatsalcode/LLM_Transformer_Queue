/*
Given a sorted array consisting of only zeroes and ones
we have to find the index of the transition point wher transition from 0 to 1 take place
input:  {0,0,0,1,1}
output: 3;
*/
#include <iostream>
using namespace std;

void transition(int arr[], int size)
{
    int a;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            a = i;
            break;
        }
    }
    cout << "The transition point is: " << a << endl;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Entered elements for sorted array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    transition(arr, size);

    return 0;
}
