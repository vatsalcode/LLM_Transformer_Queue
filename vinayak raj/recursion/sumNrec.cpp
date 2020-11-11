//find the sum of n natural number using recursion

#include<bits/stdc++.h>

using namespace std;

 int sum(int f)
 {
     if(f==1)
     {
        return 1;
     }
     return f+sum(f-1);
 }

int main()
{
    cout<<sum(15);
    return 0;
}
