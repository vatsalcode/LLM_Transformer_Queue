/*
To print a pattern for this input
1--1     2--1    3--2     4--2   5--2   6--2   7--2  8--3  9--3   10--3  11-3  12--3  14--3 15--4
*/
#include <iostream>
#include <cmath>
using namespace std;

int return_square(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j * j == i)
            {
                return j + 1;
            }
        }
    }
}

int main()
{
    int num;
    cout << "Specify number upto which pattern is to be seen: ";
    cin >> num;
    int a = return_square(num);
    int count = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < a; j++)
        {
            if (i == pow(j, 2) - 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
