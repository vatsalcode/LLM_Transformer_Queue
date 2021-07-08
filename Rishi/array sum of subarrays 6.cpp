/*
given an array and another number
find all unique quadruplt possible that sums up to the given number
input: {0,0,2,1,1} and sum is 3
ouput: 0 0 1 2
*/
#include <iostream>
using namespace std;

void subarray(int arr[], int size, int target)
{
    for (int i = 0; i <= size - 4; i++)
    {
        int add = 0;
        for (int j = i; j < i + 4; j++)
        {
            add = add + arr[j];
        }
        if (add == target)
        {
            for (int k=i; k < i + 4; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
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
    cout << "\n Enter the value of sum you want: ";
    cin >> target;
    subarray(arr, size, target);
    return 0;
}
