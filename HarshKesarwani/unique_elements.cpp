#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    cout << "Enter elements in array" << endl;
    int nums[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter element " << x + 1<<" : ";
        cin >> nums[x];
    }

    int sum = 0;

    for (int x = 0; x <size; x++)
    {
        int count = 0;
        for (int y = 0; y < size; y++)
        {
            if (nums[y]==nums[x])
            {
                count++;
            }
        }
        if (count==1)
        {
            sum = sum + nums[x];
        }
    }

    cout << sum;

    return 0;
}
