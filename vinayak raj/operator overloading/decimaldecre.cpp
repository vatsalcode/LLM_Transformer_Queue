#include<bits/stdc++.h>

using namespace std;

class decimal
{
public:
    float 8a;
    void in()
    {
        cin>>a;
    }
    void operator --()
    {
        a=a-0.10;
        cout<<a;
    }
};

int main()
{
    decimal ob;
    ob.in();
    ob.operator --();


    return 0;
}
