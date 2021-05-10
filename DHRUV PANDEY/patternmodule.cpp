#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,n;
cout<<"Pattern Printing Module \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Enter the number of terms  :   ";
cin>>n;
for(i=1;i<n+1;i++)
{
int p;
p=pow(i,3)+2*i;
cout<<p<<",";
}
return 0;
}
