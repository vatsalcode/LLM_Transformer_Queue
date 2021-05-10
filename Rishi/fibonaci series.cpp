#include<iostream>
using namespace std;
int fib(int n){
    if(n<2)
    return 1;
    return fib(n-2)+fib(n-1);
}

int main(){
int a;
cout<<"Enter any number"<<endl;
cin>>a;
cout<<"The term in fibonacci series at postion "<<a<<" is : "<<fib(a);
    return 0;
}
