#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int n;
    cin>>n;
    while(n)
    {
        long long int rem=0,count =0, num;
        bool flag = 0;
        cin>>num;
        while(num>0)
        {
          rem = num%10;
          if(rem ==7) flag = 1;
          num /= 10;
        }
       (flag==0)?(cout<<"false"<<endl):(cout<<"true"<<endl);
       n-=1;
    }
    return 0;
}
