/*
Given an integer array nums
find the contigous sub array containing atleast one member which ha largest sum and return its sum
input[]={-2,1,-3,4,-1,2,1-5,4}
ouput: {4,-1,2,1} has largest sum 6
*/
#include <iostream>
using namespace std;

void subarray(int arr[], int size)
{
    int sum ;
    sum=arr[0];
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j <= size - i; j++)
        {
            int add = 0;
            for (int k = j; k < j + i; k++)
            {
                add = add + arr[k];
            }
            if (add >= sum)
            {
                sum = add;
            }
        }
    }
    cout << "The largest sum is: " << sum;
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
    subarray(arr, size);
    return 0;
}
