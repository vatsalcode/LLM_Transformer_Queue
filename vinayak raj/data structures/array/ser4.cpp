#include<iostream>

using namespace std;

int main()
{
    int i,n,e,a[20],f=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>e;
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        {
            f=1;
            break;
        }
        else
            f=0;
    }
    if(f==1)
        cout<<"1";
    else if(f==0)
        cout<<"-1";

}

