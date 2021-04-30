#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,wr;
        cin>>n>>w>>wr;
        vector <int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        map<int,int>mp;
        for(int i=0;i<v.size();i++)
        {
            mp[v[i]]++;
        }

        if(wr>=w)
        {
            cout<<"YES"<<endl;
        }
        else
        {
           

            
            {
                for(auto i:mp)
                {
                    int u=i.second/2;
                    int y=u*2;
                    if(i.second%2==0)
                    {
                        wr=wr+(y*(i.first));
                    }
                }
            }
            if(wr>=w)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    
    }
    return 0;
}
