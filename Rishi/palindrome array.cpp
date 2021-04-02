//To check palindeome of an array
#include <iostream>
using namespace std;

void array_reversal(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element no " << i + 1 << ": ";
        cin >> arr[i];
    }
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = arr[i];
    }
    cout << "The entered array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    array_reversal(arr, size);
    cout << "The Reverse array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    bool flag = true;

    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "It is a palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}
