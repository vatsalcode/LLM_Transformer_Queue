//To print a pattern like this
/*
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    int num = 1;
    cout << "Enter no of rows you want: " << endl;
    cin >> rows;
    cout << "Here is the pattern:" << endl
         << endl;
    for (int i = 1; i < rows + 1; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << num<<" ";
            num = num + 1;
        }
        cout << endl;
    }

    return 0;
}
