#include<bits/stdc++.h>

using namespace std;

prnt(string &name,int &f)
{
    cout<<name;
    prnt(name,f);

}

int main()
{
    string name;
    getline(cin,name);
    int f;cin>>f;
    prnt(name,f);
    return 0;
}
