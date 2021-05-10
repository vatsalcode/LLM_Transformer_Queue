#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}/*
5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
