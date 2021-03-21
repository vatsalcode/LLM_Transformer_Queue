// to check whether entered number is angstrom number
//Angstrom number is a number which is equal to sum of cubes of its digits
//for example 377 ---->  3cube + 7cube + 1 cube

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    int n;
    cout << "This is the programme to check a angstrom number." << endl
         << endl;
    cout << "Enter the number:  ";
    cin >> number;
    int temp = number; //this is an important step
    while (number > 0)
    {
        n = number % 10;
        sum = sum + n*n*n;
        number = number / 10;
    }

    if (sum == temp)
    {
        cout << "The entered number " << temp << " is a angstrom number" << endl;
    }
    else
    {
        cout << "The number enetered is not an angstrom number" << endl;
    }

    return 0;
}
