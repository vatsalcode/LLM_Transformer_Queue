/*
given an array of integers and a target 
targeet is equal to indexes of the element whose sum is equal to target
return target
Input:  {2,3,4,5,6,7}
target: 9 
Output: 0,5
*/
#include <iostream>
using namespace std;

void index(int arr[], int size, int target)
{
    int a, b;
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = 0; j < size; j++)
        {
            int add = 0;
            add = add + arr[i] + arr[j];
            if (add == target)
            {
                a = i;
                b = j;
                temp = add;
                break;
            }
        }
        if (temp == target)
        {
            break;
        }
    }
    cout << "The index of elements are: " << a << " and " << b << endl;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array but do not repeat any element" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    int target;
    cout << "Enter the value of target: ";
    cin >> target;
    index(arr, size, target);
    return 0;
}
