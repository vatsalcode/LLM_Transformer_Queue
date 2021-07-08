/*
A number is said to be unique if any two digits are not same
for eg 123456 no two digits are same
*/

#include <iostream>
using namespace std;

int count_digits(int num)
{
    int a = num, i = 0;
    while (a > 0)
    {
        a = a / 10;
        i++;
    }
    return i;
}
int main()
{
    int a, b, i = 0;
    cout << "This is the programme to check whether a number is unique or not" << endl
         << endl;
    cout << "Enter the number: ";
    cin >> a;
    int z = count_digits(a);
    int arr[z];
    while (a > 0)
    {
        b = a % 10;
        a = a / 10;
        arr[i] = b;
        i++;
    }

    bool flag = true;
    int j = 0;

    for (int k = 0; k < z; k++)
    {
        while (j < z)
        {
            if (j != k)
            {
                if (arr[k] == arr[j])
                {
                    flag = false;
                    break;
                }
            }
            j++;
        }
        j = 0;
    }
    if (flag)
    {
        cout << "Entered number is unique" << endl;
    }
    else
    {
        cout << "Entered number is not unique" << endl;
    }

    return 0;
}
