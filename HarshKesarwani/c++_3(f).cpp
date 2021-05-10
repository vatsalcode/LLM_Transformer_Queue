#include<iostream>
#include<iomanip>
using namespace std;

int main(){
int age;
cout<<"enter your age";
cin>>age;
if(age<18)
{
    cout<<"not eligible";
}
else if(age==18)
{
    cout<<"will come but not will be given anything";
}
else
{
    cout<<"you are eligible";
}
return 0;

}
