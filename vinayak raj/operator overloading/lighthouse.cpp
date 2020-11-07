#include<iostream>

using namespace std;

class time{
private:
    float hr,mins,secs;
public:
    void operator >>(int ob)
    {
        cin>>hr>>mins>>secs;
    }
    void operator <<(int ob)
    {
        cout<<hr<<" hours "<<mins<<" minutes "<<secs<<" seconds ";
    }
};


int main()
{
    time t;
    int a=3;
    t.operator >>(a);
    t.operator <<(a);

    return 0;
}
