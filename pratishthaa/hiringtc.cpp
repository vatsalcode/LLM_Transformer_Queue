#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x,y;
        cin>>x>>y;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            int countsol=0;
            int countpart=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='F')
                {
                    countsol++;
                }
                if(s[j]=='P')
                {
                    countpart++;
                }
            }
            if(countsol>=x || (countsol==(x-1) && countpart>=y))
            {
                v.push_back(1);
            }
            else{
               v.push_back(0);
            }
        }
        for(int k=0;k<v.size();k++)
        {
            cout<<v[k];
        }
        cout<<endl;
    }
    return 0;
}
