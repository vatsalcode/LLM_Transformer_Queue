/*
given an integer array and 3 integers a,b,c
we need to fnd good triplet
a triplet[(arr[i],arr[j],arr[k]) is good if following condixtions are satisfies
0 <= i,j,k<arr.length();
|arr[i] - arr[j]| <= a
|arr[j] - arr[k]| <= b
|arr[i] - arr[k]| <= c
*/

#include <iostream>
using namespace std;

int mode(int x, int y)
{
    if (x - y < 0)
    {
        return -1 * (x - y);
    }
    else
    {
        return x - y;
    }
}

void display(int arr[], int size, int a, int b, int c)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (i, j, k >= 0 && i, j, k < size && mode(arr[i], arr[j]) <= a && mode(arr[j], arr[k]) <= b && mode(arr[i], arr[k]) <= c)
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
    int a, b, c;
    cout << "Specify a:";
    cin >> a;
    cout << "Specify b:";
    cin >> b;
    cout << "Specify c:";
    cin >> c;
    display(arr, size, a, b, c);

    return 0;
}
