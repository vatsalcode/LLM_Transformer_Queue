#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number to check if it is Unique or not" << endl;
    cin >> num;
    bool flag = true;
    for (int x = 0; x <= 9; x++)
    {
        int count = 0;
        for (int y = num; y != 0; y = y / 10)
        {
            int d = y % 10;
            if (d == x)
            {
                count++;
            }
        }
        if (count > 1)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        cout << num << " IS AN UNIQUE NUMBER" << endl;
    }

    else
    {
        cout << num << " IS NOT AN UNIQUE NUMBER" << endl;
    }

    return 0;
}
