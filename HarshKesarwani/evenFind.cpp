#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    cout << "Enter numbers " << endl;
    int arr[size];
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }
    cout << endl
         << "Even numbers are " << endl;
    bool flag = false;
    for (int x = 0; x < size; x++)
    {
        if (arr[x] % 2 == 0)
        {
            cout << arr[x] << endl;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "No even numbers found! " << endl;
    }

    return 0;
}
