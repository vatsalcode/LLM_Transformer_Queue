#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    int c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<c;
            c++;
        }
        cout<<endl;
    }
}
