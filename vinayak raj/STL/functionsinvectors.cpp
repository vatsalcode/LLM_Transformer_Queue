//pop_back()
//front()
//back()

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int >v{3,4,6,7,4,2};

    v.pop_back();
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    cout<<v.front()<<" ";//returns reference
    cout<<v.back()<<" ";//reference
    return 0;
}
