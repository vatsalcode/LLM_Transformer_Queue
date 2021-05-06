/*
Given a array of integer n
arrange the elements in descending order of the no of 1 in their binary complement 
for elements with same no of binary bits set them in order of their postion in original array
input: {5,2,3,9,4,6,7,15,32}
output: {15,7,5,3,9,6,2,4,32}
*/
#include <iostream>
using namespace std;

int binary(int number)
{
    int a, count = 0;
    while (number > 0)
    {
        a = number % 2;
        number = number / 2;
        if (a == 1)
        {
            count++;
        }
    }
    return count;
}

void display(int arr1[], int size)
{
    int sort[size];
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (binary(arr1[j]) > binary(arr1[max]))
            {
                max = j;
            }
        }
        sort[i] = arr1[max];
        arr1[max] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << sort[i] << " ";
    }
    cout << endl;
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
    cout << "Entered array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "sorted array: ";
   display(arr,size);

    return 0;
}
