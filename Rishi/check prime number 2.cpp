//for any number including 0 and 1
#include <iostream>
using namespace std;
int main()
{
    int number;
    bool isprime = true;
    cout << "This programme is to check Whether a number is prime or not" << endl;
    cout << "Enter the number you want to check: ";
    cin >> number;

    if (number == 0 || number == 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i <=number / 2; ++i)
        {
            if (number % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    if (isprime)
    {
        cout << "The entered number" << number << " is prime" << endl;
    }
    else
    {
        cout << "The entered number" << number << " is not prime" << endl;
    }

    return 0;
}
