#include<bits/stdc++.h>

using namespace std;

void fun( vector <int > &v)
{
    v.push_back(10);
    v.push_back(20);
}

int main()
{

    vector<int >v{5,7,8};
    fun(v);
    for(int x:v)
        cout<<x<<" ";
    return 0;
}
