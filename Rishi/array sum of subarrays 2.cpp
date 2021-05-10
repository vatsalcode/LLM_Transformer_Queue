/*
Take input of a variable size array 
print sum of all elements of all subsets possible with a space centered programme 
*/
#include <iostream>
using namespace std;

void sub_arrays(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            int sum = 0;
            for (int k = j; k < i + j; k++)
            {
                sum = sum + arr[k];
            }
            cout << sum << " ";
        }
        cout<<endl;
    }
}

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
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
    sub_arrays(arr, size);

    return 0;
}
