/*
Take input of a variable suze array and the value of length of subset
print sum of all elements of all subsets possible with a space centered programme 
*/
#include <iostream>
using namespace std;

void sub_arrays(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int size, subset;
    cout << "Enter size of the array: ";
    cin >> size;
    cout << "Enter the size of subarray: ";
    cin >> subset;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The array you entered was: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sub_arrays(arr, size, subset);

    return 0;
}
