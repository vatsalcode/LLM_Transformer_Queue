#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements" << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }
    int min = 0, max = size - 1;
    bool flag = false;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if ((arr[mid] == 1 && arr[mid + 1] == 0) || (mid == max && arr[mid] == 1))
        {
            cout << mid + 1;
            flag = true;
            break;
        }
        else if (arr[mid] == 0)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    if (flag == false)
    {
        cout << "No one present";
    }
    return 0;
}
