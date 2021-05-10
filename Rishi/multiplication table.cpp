#include<iostream>
using namespace std;

int main(){
float a;
cout<<"Enter any positive  integer : "<<endl;
cin>>a;
cout<<"The table of "<<a <<" upto 10 is"<<endl;
int b;
for ( b =1 ; b<11; b++)
{
    cout<<a<<"*"<<b<<"="<<b*a<<endl;
}
    return 0;
}
