#include<iostream>
using namespace std;


float moneyrecieved(float x ,float y=1.04){
    float z=x*y;
    return z;
}
int main(){
    cout<<"You are considered as a vip for bank if you are a bank employee or any famous personality. "<<endl<<endl;
    cout<<"Type '1' if you are a vip"<<endl;
    cout<<"Type '2' if you are a not a vip"<<endl<<endl;

int c;
cout<<"Tell whether you are a vip or not"<<endl;
cin>>c;
if ( c==1){
    int money;
    cout<<"Enter the amount in your bank account : "<<endl;
    cin>>money;
    cout<< "If you have this Rs "<<money<<" in your bank account,it will become "<<moneyrecieved(money,1.1)<<" after 1 year."<<endl<<endl;
    cout<<"The rate of interst for you was 10 percent"<<endl;
}
else if ( c== 2){
    int moneyd;
    cout<<"Enter the amount in your bank account : "<<endl;
    cin>>moneyd;
    cout<<"If you have  "<<moneyd<<"  Rs in your bank account,it will become "<<moneyrecieved(moneyd)<<" after 1 year."<<endl<<endl;
    cout<<"The rate of interst for you was 4 percent"<<endl;
}
else{
   cout<<"You have to specify whether you are a vip or not"<<endl;
}
   return 0;
} 
