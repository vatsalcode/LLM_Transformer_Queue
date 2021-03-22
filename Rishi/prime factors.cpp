//To find prime factorization of a given number
#include <iostream>
#include <cmath>
using namespace std;

void prime_factor(int a)
{
    //This will print all the 2's that  divide the number
    while (a % 2 == 0)
    {
        cout << 2 << " ";
        a = a / 2;
    }
    //The number A coming out of while loop will be odd number for sure
    //So in the fo loop which we are using we can skip the numbers which are divided by 2 i.e even numbers
    for (int i = 3; i < sqrt(a); i = i + 2)
    {
        while (a % i == 0)
        {
            cout << i << " ";
            a = a / i;
        }
    }
    //This is the code to print a prime number which is gretare than 2
    if (a>2)
    {               
        cout<<a<<" ";
    }
    
}

int main()
{
    int number, factor;
    cout << "This programme is to find prime factorization of a given number" << endl;
    cout << "Enter the number: ";
    cin >> number;
    prime_factor(number);
    return 0;
}
