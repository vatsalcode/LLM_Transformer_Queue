//To check palindrome number
//131  which are same from front and backend
//it will also work when we consider 0 at first and last place 

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    cout << "This programme is to check whether anumber is palindeome or not" << endl
         << endl;
    cout << "Enter the number yo want to check:  ";
    cin >> number;
    int c = number.length();
    int flag = 0;
    for (int i = 0; i < c; i++)
    {
        if (number.at(i) != number.at(c - i-1))
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "The number " << number << " is not a palindrome" << endl;
    }
    else
    {
        cout << "The number " << number << " is a palindrome" << endl;
    }

    return 0;
}
