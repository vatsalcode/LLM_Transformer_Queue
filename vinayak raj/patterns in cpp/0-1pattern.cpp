
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i,j,n;cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            ((i+j)%2==0)?cout<<"1":cout<<"0";
        }
        cout<<endl;
    }

return 0;
}/*
5
1
01
101
0101
10101*/
