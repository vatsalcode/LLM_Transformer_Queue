#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "This programme is to check Whether a number is prime or not" << endl;
    cout << "Enter the number you want to check except 0 and 1:  ";
    cin >> number;

    int flag = 0;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << "Entered Number is not prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Entered number is prime." << endl;
    }

    return 0;
}
