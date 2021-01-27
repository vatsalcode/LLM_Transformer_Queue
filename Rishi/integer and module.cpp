#include<iostream>
using namespace std;
int main(){
    float  a=45.6;
    float  & b=a;
cout<<a<<endl;
cout<<b<<endl;
cout<<"the value of a is :"<<(int) a<<endl;

cout<<"The expression is:"<< a + b<<endl;
cout<<"The expression is:"<< a + (int) b<<endl;
cout<<"The expression is:"<< a + int (b)<<endl;
return 0;
}                
