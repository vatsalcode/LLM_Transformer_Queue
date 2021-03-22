//To find sum of pattern like this
/*
1 + 12 + 123 + 1234+ ........
*/

#include <iostream>
using namespace std;

int series(int num)
{
    int a = num;
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum = sum * 10 + i;
    }

    return sum;
}

int main()
{
    int number;
    cout << "Enter no of terms: ";
    cin >> number;
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + series(i);
    }
    cout << "The sum of series upto " << number << " term is : " << sum;

    return 0;
}
