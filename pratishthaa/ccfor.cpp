#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        long long f;
        cin>>n>>k>>f;
        if(n==1)
        {
            int x,y;
            cin>>x>>y;
            int u=x+(f-y);
            if(u>=k)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            vector<pair<int,int>>vect;
            vector<int>v1;
            vector<int>v2;
            for(int i=0;i<n;i++)
            {
                int x;int y;
                cin>>x>>y;
                v1.push_back(x);
                v2.push_back(y);
            }
            for(int i=0;i<n;i++)
            {
                vect.push_back(make_pair(v1[i],v2[i]));
            }
            sort(vect.begin(),vect.end());
            int l=0;
            for(int i=0;i<n;i++)
            {
                if(vect[i+1].first >vect[i].second)
                l=l+(vect[i+1].first)-(vect[i].second);
                
            }
            int x=l+f-vect[vect.size()-1].second;
            if(x>=k)
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
