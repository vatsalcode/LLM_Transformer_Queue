#include<iostream>
using namespace std;

// Function protypes
//int sum(int a,int b) ----acceptable
//int sum(int a,b)-----non acceptable
//int sum(int ,int) ----Just writing int will also excecute the programme
//void g()---acceptable


int sum (int a, int b);
//it tells the compiler that find sum in the code
void g(void);

int main(){

    int num1,num2;
cout<<"Enter the value of num 1 : "<<endl;
cin>>num1;
cout<<"Enter the value of num 2 : "<<endl;
cin>>num2;
//num1 and num2 are actual parametres
cout<<"The sum is : "<<sum(num1, num2 )<<endl;
g();
    return 0;
}
int sum(int a, int b){
    int c =a+b;
    // formal parametres a and b takes value from actual parametres num 1 and num2
    return c;
}
void g(){
    cout<<"Helo world";
}
