#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int >v{2,3,4,5,6,78,9};

    v.erase(v.end()-2);
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin(),v.begin()+1);
    for(itn x:v)
        cout<<x<<" ";

    return 0;
}
