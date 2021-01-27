#include<iostream>
using namespace std;

int main(){
    int i;
cout<<"Enter the value of i between 0 and 8"<<endl;
cin>>i;
    //loops in C++
    // For loops
    for(--i;(i<8) &&(i>0);i--)
    {
cout<<"The  number less than this and greater then 0 are:"<<i<<endl;
    }
//while loop
int p;
cout<<"Enter the vale of p less than 20 and greter then 0"<<endl;
cin>>p;
while (p<20)
{
    cout<<"The no less than 20 and greater than this are :"<<p<<endl;
    p++;
}

//do while loop\

int c;
cout<<"Enter c less than 10 and greater than 0: "<<endl;
cin>>c;
do
{
cout<<"The value than 10 and greater than this no is :"<<c<<endl;
c++;    
} while (c<10);
    return 0;

}
