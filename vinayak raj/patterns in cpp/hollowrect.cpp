#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int row,col;cin>>row>>col;
     int i, j;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || i == row ||
                j == 1 || j == col)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

}
