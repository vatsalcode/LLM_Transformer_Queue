#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size;
    cout << "Enter size " << endl;
    cin >> size;

    if (size % 2 == 0)
    {
        cout << "Enter elements" << endl;
        int nums[size];
        int sum = 0;
        for (int x = 0; x < size; x++)
        {
            cout << "Enter element " << x + 1 << " : ";
            cin >> nums[x];
        }

        sort(nums, nums + size);

        for (int x = 0; x < size - 1; x = x + 2)
        {
            sum = sum + nums[x];
        }

        cout << sum;
    }

    else
    {
        cout << "Wrong Input" << endl;
    }

    return 0;
}
