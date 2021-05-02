//Reordering array according to the given new indexes with index repeating
/*
nums array{0,1,2,3,4}
index{0,1,2,2,1}
ouput{0,4,1,3,2}
*/
#include <iostream>
#include <vector>
using namespace std;

void enter(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void new_array(int nums[], int index[], int size)
{
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }

    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (index[i] == index[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            arr[index[i]] = nums[i];
        }
        else
        {
            for (int k = size - 1; k > index[i]; k--)
            {
                arr[k] = arr[k - 1];
            }
            arr[index[i]] = nums[i];
        }
    }
    display(arr, size);
}
int main()
{
    int size;
    cout << "Specify size of array: ";
    cin >> size;
    int nums[size], index[size];
    cout << "Enter nums array: " << endl;
    enter(nums, size);
    cout << "Enter Index array: " << endl;
    enter(index, size);
    new_array(nums, index, size);

    return 0;
}
