#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
    int x,m,d;
    cin>>x>>m>>d;
    cout<<min(x*m , x+d)<<endl;
   
   }
}
