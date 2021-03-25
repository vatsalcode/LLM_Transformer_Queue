#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int nums[size];
    int target;
    int index[2];
    cout << "Enter target" << endl;
    cin >> target;
    cout << "Enter elements" << endl;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter element : " << x + 1 << " : ";
        cin >> nums[x];
    }
    bool flag = false;
    for (int x = 0; x < size - 1; x++)
    {
        if (flag == false)
        {
            for (int y = x + 1; y < size; y++)
            {
                if (nums[x] + nums[y] == target)
                {
                    flag = true;
                    cout << "[" << x << "," << y << "]";
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }

    if (flag == false)
    {
        cout << "Not found";
    }
    return 0;
}
