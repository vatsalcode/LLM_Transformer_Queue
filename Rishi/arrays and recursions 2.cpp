//To check whether an array is palindrome using recursions
#include <iostream>
using namespace std;

/*
we have to understand that while we are using arrays in recursion usinf if statement we need to know it will 
after any of the if condition is satisfied
*/

int check_array(int arr[], int first, int last)
{
    if (first >= last)
    {
        return 1;
    }

    if (arr[first] == arr[last])
    {
        return check_array(arr, first + 1, last - 1);
    }
    else
    {
        return 0;
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
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
    int a = check_array(arr, 0, size - 1);
    if (a == 1)
    {
        cout << "Palindrome array" << endl;
    }
    else
    {
        cout << "Non palindrome array" << endl;
    }

    return 0;
}
