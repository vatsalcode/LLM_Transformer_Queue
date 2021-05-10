#include<iostream>
using namespace std;
 int product(int x, int y){
     static int c=1;  //This will excecute only once . Agli baar jab ye laut kar aayega to 
     //use ye value nhi milegi c+1 milegi means ye line sirf first time hi excecute hogi
     // value specified  is never initialised 
     c=c + 1;//next time this value of c will be retained , it will not start from 0 again
      return x*y+c;
}


int main(){
    int a,b;
    cout<<"Enter the value of num1 : "<<endl;
    cin>>a;
     cout <<"Enter the value of num 2 : "<<endl;
    cin>>b;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    cout <<"The product of two numbers is : "<<product(a,b)<<endl;
    return 0;
}
