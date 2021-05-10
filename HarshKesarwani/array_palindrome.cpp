#include <iostream>
using namespace std;

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
    bool flag = true;
    for (int x = 0, y = size - 1; x < size; x++, y--)
    {
        if (arr[x] != arr[y])
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << "PALINDROME";
    }

    else
    {
        cout << "NOT PALINDROME";
    }
    return 0;
}
