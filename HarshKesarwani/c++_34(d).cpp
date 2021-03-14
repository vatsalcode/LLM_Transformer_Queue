#include<iostream>
using namespace std;
void func(int a)
{
    cout<<"First function "<<a<<endl;
}

template <class t>
void func(t a)
{
    cout<<"Template function "<<a<<endl;
}

int main()
{
    func(4); // exact match takes the higher priority
    func('c');
    return 0;
}
