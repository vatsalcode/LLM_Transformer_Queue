
#include<bits/stdc++.h>

using namespace std;
int g=0;
/*int power(int a,int b)
{
    g++;
    if(b==0)
    {
        return 1;
    }
    return a*power(a,b-1);
}*/
int fastpow(int a,int b)
{
    if(b=0)
    {
        return 0;
    }
    if(b%2==0)
    {
        return fastpow(a*a,b/2);
    }
    return a*fastpow(a,b-1);
}
int main()
{
    //cout<<power(3,4)<<endl;
    cout<<fastpow(3,5)<<endl;
    cout<<g;
    return 0;
}
