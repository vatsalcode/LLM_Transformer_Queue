#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int a=0;
        int flag=1;
        if(s[0]!='<'  || s[1]!='/'  || s[n-1]!='>')
        {
            cout<<"Error"<<endl;
        }
        else{
                for(int i=2;i<s.size()-1;i++)
            {
                if((s[i]>=97  && s[i]<=122) ||( s[i]>=48 && s[i]<=57))
                {
                    a++;
                }
                else{
                    flag=0;
                }
            }
            if(flag==1 && a>0)
            {
                cout<<"Success"<<endl;
            }
            else{
                cout<<"Error"<<endl;
            }
        }
    }
    return 0;
}
