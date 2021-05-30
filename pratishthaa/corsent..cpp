#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
       
       vector<int>v;
       map<int,int>mp;
       for(int i=0;i<k;i++)
       {
           int x;
           cin>>x;
           v.push_back(x);
           
       }
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           mp[v[i]]++;
       }
       int c=0;
       vector<int>v2;
       for(auto i:mp)
       {
           if(i.second>1  && i.first<=n)
           {
               c++;
                v2.push_back(i.first);
           }
       }
       cout<<c<<" ";
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
