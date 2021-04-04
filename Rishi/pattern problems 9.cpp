/*
Given a sample space of perfect squares like 1,4,9,16 ------- so on
given a number n find no of perfect square before it
input: 9
outpur:2
*/
#include <iostream>
using namespace std;

int perfect_square(int number)
{
    bool flag=false;
    for (int i = 1; i <= number; i++)
    {
        if (number == i * i)
        {
             flag=true;
            break;
        }
    }
    if (flag)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void display(int number)
{
    for (int i = 1; i < number; i++)
    {
        if (perfect_square(i) == 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    display(number);
    return 0;
}
