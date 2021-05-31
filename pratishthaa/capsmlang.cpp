#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag1=0;
        int flag2=0;
        int flag3=0;
        int flag4=0;
        for(int k=1;k<=n;k++)
        {
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++)
            {
                 if((s[i]>='a'  && s[i]<='m')||( s[i]>='N' && s[i]<='Z'))
                 {

                 flag4=1;
                 }
                 else{
                    flag4=2;
                 }

            }
            for(int i=0;i<s.size();i++)
            {

                    if(s[i]>='a'  && s[i]<='m'  )
                    {
                    flag1=1;
                    }
                    if(s[i]>='N' && s[i]<='Z')
                    {
                        flag2=1;
                    }
                    if(flag1==1 && flag2==1)
                    {
                        flag3=1;
                    }
                
            }
            flag1=0;
            flag2=0;
            
        }
        if( flag3==1 || flag4==2 ||flag4==0)
        {
            cout<<"NO"<<endl;
        }
        else if(flag4==1 && flag3!=1){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
