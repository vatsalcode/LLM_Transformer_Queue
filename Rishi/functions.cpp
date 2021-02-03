#include <iostream>
using namespace std;

int sum(int a, int b){
    int c =a+b;
    return c;
}
int main(){
int num1,num2;
cout<<"Enter the value of num 1 : "<<endl;
cin>>num1;
cout<<"Enter the value of num 2 : "<<endl;
cin>>num2;
cout<<"The sum is : "<<sum(num1, num2 );

    return 0;
}
