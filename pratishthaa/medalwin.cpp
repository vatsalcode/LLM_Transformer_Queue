#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int days,dkm,a,b,c;
        cin>>days>>dkm>>a>>b>>c;
        int y=days*dkm;
        if(y<10)
        {
            cout<<"0"<<endl;
        }
        else{
            if(y>=42)
            {
                cout<<c<<endl;
            }
            else if(y<42 && y>=21 )
            {
                cout<<b<<endl;
            }
            else if(y>=10 && y<21 && y<42){
                cout<<a<<endl;
            }
        }
    }
    return 0;
}
