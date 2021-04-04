/*
We are given a integer array nums
unique elements are those which appear exactly once in the array
return sum of unique elements
*/
#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int add = 0;
    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = false;
            }
        }
        if (flag)
        {
            add = add + arr[i];
        }
    }

    cout <<"The sum of al unique numbers is: "<< add;
}
int main()
{
    int size;
    cout << "Enter size of arrray: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    sum(arr, size);
}
