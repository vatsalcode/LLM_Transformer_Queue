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
    int index;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if ((arr[mid] == 1 && arr[mid - 1] == 0) || (mid == 0 && arr[mid] == 1))
        {
            index = mid;
            flag = true;
            break;
        }
        else if (arr[mid] == 1 && arr[mid - 1] == 1)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    if (flag == true)
    {
        cout << index;
    }
    else
    {
        cout << "No Tansition Point";
    }
    return 0;
}
