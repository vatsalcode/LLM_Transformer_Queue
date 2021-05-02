//Find k largest element of an array
#include <iostream>
using namespace std;

int minimum(int arr[], int size)
{
    int sum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < sum)
        {
            sum = arr[i];
        }
    }
    return sum;
}

void largest(int arr[], int size, int k)
{
    int order[size];
    int a;
    for (int j = 0; j < size; j++)
    {
        int sum = 0;

        for (int i = 0; i < size; i++)
        {

            if (arr[i] > sum)
            {
                sum = arr[i];
                a = i;
            }
        }
        arr[a] = minimum(arr, size);
        order[j] = sum;
    }
    for (int i = 0; i < k; i++)
    {
        cout << order[i] << " ";
    }
}

int main()
{
    int size, k;
    cout << "Specify size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl
         << "Specify number of largest element to be seen: ";
    cin >> k;
    largest(arr, size, k);

    return 0;
}
