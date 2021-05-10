#include<bits/stdc++.h>

using namespace std;

#define speed; ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    int n;
    vector<int > v;
    while(cin>>n)
    {
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    return 0;
}
