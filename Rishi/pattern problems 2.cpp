//To print a pattern like this
/*
   1
  121
 12321
1234321    
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int l = i - 1; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}
