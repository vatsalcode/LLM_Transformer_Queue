
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    int r,c;cin>>r>>c;
    int m[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>m[i][j];
        }
    }
      int rows = r;

        for (int i = 0; i < r; i++)
        {
            int t = m[0][i];
            m[0][i] = m[rows - 1][i];
            m[rows - 1][i] = t;
        }

     for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << m[i][j] << " ";
            cout << endl;
        }


}
