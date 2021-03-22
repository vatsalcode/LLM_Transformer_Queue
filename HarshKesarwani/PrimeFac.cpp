#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    vector<int> arr;
    for (int x = 2; x <= num; x++)
    {
        while (num % x == 0)
        {
            arr.push_back(x);
            num = num / x;
        }
    }

    for (int x = 0; x < arr.size(); x++)
    {
        if (x != arr.size() - 1)
        {
            cout << arr[x] << " , ";
        }
        else
        {
            cout << arr[x];
        }
    }
    return 0;
}
