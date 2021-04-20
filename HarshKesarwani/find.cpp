#include <iostream>
using namespace std;

int main()
{
    int ar[10];
    for (int x = 0; x < 10; x++)
    {
        cin >> ar[x];
    }
    int min = 0, max = 9;
    int index = -1, n;
    cout << "enter number to search" << endl;
    cin >> n;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (n == ar[mid])
        {
            index = mid;
            break;
        }
        else if (n > ar[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }
    if (index == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found At " << index << endl;
    }
    return 0;
}
