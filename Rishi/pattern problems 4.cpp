//To print a pattern like this
/*
       *
      ** 
     ***
    ****  
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter no of rows: ";
    cin >> rows;
    cout << "Here is the  pattern: " << endl
         << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
