#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int nums[size], index[size];
    vector<int> target(size);
    cout << "Input Numbers and Index" << endl;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter number : ";
        cin >> nums[x];
        cout << "Enter index : ";
        cin >> index[x];
    }
    cout << endl;

    int s = size;
    int in = 0;
    while (s != 0)
    {
        int i = index[in];
        int n = nums[in];
        target.insert(target.begin() + i, n);
        in++;
        s--;
    }

    for (int x = 0; x < size; x++)
    {
        if (x == 0)
        {
            cout << "[" << target[x] << " , ";
        }
        else if (x == size - 1)
        {
            cout << target[x] << "]";
        }
        else
        {
            cout << target[x] << " , ";
        }
    }
    return 0;
}
