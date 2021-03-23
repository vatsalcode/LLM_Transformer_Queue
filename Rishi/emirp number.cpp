//To check whether a number is emirp or not
/*
Emirp is a number which is prime from both front and back ends i.e prime when read backword and frontwards
*/

#include <iostream>
using namespace std;

int prime_number(int number)
{
    int a = number;
    bool isprime = true;
    if (a == 0 || a == 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    if (isprime)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int reverse_number(int number)
{
    int a = number, sum = 0, n;
    while (a > 0)
    {
        n = a % 10;
        sum = sum * 10 + n;
        a = a / 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "This is the programme to check enrip number" << endl
         << endl;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The number you entered is: " << num << endl;
    int x = reverse_number(num);
    if (prime_number(num) == 1 && prime_number(x) == 1)
    {
        cout << "The number " << num << " is a emirp number" << endl;
    }
    else
    {
        cout << "The number " << num << " is not a emirp number" << endl;
    }
    return 0;
}
