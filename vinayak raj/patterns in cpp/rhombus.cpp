
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


return 0;
}
/*
    *****
   *****
  *****
 *****
*****

*/
