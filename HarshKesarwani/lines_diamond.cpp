#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<endl;
            for(int x=1;x<=n*2-1;x++)
        {
            for(int y=1;y<=n*2-1;y++)
            {
                if(x+y==n+1 || x+y==n*3-1 || x-y==n-1 || y-x==n-1)  
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return 0;
}
