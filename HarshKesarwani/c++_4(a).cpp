1) Learned about switch-case
2)Learned about loops

#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter your age";
cin>>age;
switch(age){
    case 18 :
    cout<<"your age is 18";
    break;

    default :
    cout<<"no special case";
    break;
}
    return 0;

}
