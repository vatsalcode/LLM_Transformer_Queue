/*
given is an array of size n\we have to find totl no fo subarrays whose sum is zer
input: {6,-1,-3,4,-2,2,4,6,-12,-7}
output: 4
subarrays array {-1,-3,4},{-2,2},{2,4,6,-12},[-1,-3,4,-2,2]
*/
#include <iostream>
using namespace std;

void subarrays(int arr[], int size)
{
    int count = 0;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j <= size - i; j++)
        {
            int sum = 0;
            for (int k = j; k < j + i; k++)
            {
                sum = sum + arr[k];
            }
            if (sum == 0)
            {
                count++;
            }
        }
    }
    cout << "No of such subarrays are: " << count << endl;
}

int main()
{
    int size;
    cout << "Specify size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    subarrays(arr, size);
    return 0;
}
