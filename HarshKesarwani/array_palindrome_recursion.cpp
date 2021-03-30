#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int from_front, int from_end)
{
    if (from_front >= from_end)
    {
        return true;
    }

    if (arr[from_front] == arr[from_end])
    {
        return isPalindrome(arr, from_front + 1, from_end - 1);
    }
    else
    {
        return false;
    }
}
int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }

    if (isPalindrome(arr, 0, size - 1) == true)
    {
        cout << "PALINDROME";
    }

    else
    {
        cout << "NOT PALINDROME";
    }
}
