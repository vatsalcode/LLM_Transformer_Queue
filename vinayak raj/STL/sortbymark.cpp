
#include<bits/stdc++.h>

using namespace std;

void sortmy(int a[],int m[],int n)
{
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    {
        v.push_back({m[i],a[i]});

    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
}

//
//void mycmp(pair< int,int> p1,pair<int,int>p2)
//{
//    return p1.second>p2.second;
//}

int main()
{
    int a[]={101,108,103,105};
    int m[]={70,80,40,90};

    int n=sizeof(a) / sizeof(a[0]);

    sortmy(a,m,n);
    return 0;
}
