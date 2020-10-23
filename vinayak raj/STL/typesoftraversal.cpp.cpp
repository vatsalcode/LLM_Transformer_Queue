#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v{3,4,5,6,8,9};

    //type 1
//    for(int i=0;i<v.size();i++)
//        cout<<v[i]<<" ";//or use v.at();**this returns reference and is more efficient

    //type 2
//
//    for(int x:v)
//        cout<<x<<" ";

    //type3
    for(auto i=v.begin();i!=v.end();i++)//auto i is iterator i.e vector<int>::iterator i;
        cout<<*i<<" ";

    return 0;
}
