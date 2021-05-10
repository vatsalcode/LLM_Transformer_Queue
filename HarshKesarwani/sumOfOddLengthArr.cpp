#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;
    int arr[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter value " << x + 1 << endl;
        cin >> arr[x];
    }
    int sum = 0;
    for (int x = 0; x < size; x++)
    {
        for (int y = x; y < size; y = y + 2)
        {
            for (int z = x; z <= y; z++)
            {
                sum = sum + arr[z];
            }
        }
    }
    cout << sum;
    return 0;
}
