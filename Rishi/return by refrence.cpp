#include<iostream>
using namespace std;
int& swap(int &a,int &b){
    int temp =a ;
    a=b;
    b=temp;
   return b;
}
int main(){
    int x=4,y=5;
    cout<<"The value of X is : "<<x<<" and the value of Y is"<<y<<endl;
    swap(x,y) = 766;
      cout<<"The value of X is : "<<x<<" and the value of Y is"<<y<<endl; 
    return 0;
}
