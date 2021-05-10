// TO find a random triplet of an array with a given sum (non contigous also)
#include <iostream>
using namespace std;

void display(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
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
         << "Specify value of target sum: ";
    cin >> target;
    display(arr, size, target);

    return 0;
}
