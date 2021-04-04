/*
Given a array of postive integers  
calculate sum of all odd sub arrays
return sum
Input: 1,4,2,5,3
output: 58
explanation:  [1],[4],[2],[5],[3],[1,4,2],[4,2,5],[2,5,3],[1,4,2,5,3]
*/
#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int result = 0;
    for (int i = 1; i <= size; i = i + 2)
    {
        int temp = 0;
        for (int j = 0; j <= size - i; j++)
        {
            int sum = 0;
            for (int k = j; k < j + i; k++)
            {
                sum = sum + arr[k];
            }
            temp = temp + sum;
        }
        result = result + temp;
    }
    cout << "\nThe sum of all odd possible contigous array is: " << result << endl;
}

int main()
{
    int size;
    cout << "Specify size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element no " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "The Entered array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sum(arr, size);

    return 0;
}
