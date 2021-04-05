/*
Given a array  of integers and  a sum value x
find all triplets having sum less than that sum value
input: {-2,0,1,3} and X=2
output:  {-2,0,1} and {-2,0,3} 
*/
#include <iostream>
using namespace std;

void sort(int arr[], int size, int given_sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] < given_sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
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
    cout << endl
         << endl
         << "Specify target sum: ";
    cin >> target;
    sort(arr, size, target);

    return 0;
}
