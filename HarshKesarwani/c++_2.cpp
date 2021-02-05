1) Learned about scope of variable
2) Learned about datatype;its categories;type;size
3) Taking input from user


#include<iostream>
using namespace std;
int glo=6; //global variable
void xyz()
{
    int a; //local variable
    cout<<glo; //will print global variable  
}
int main()
{
    int glo=9; //local variable,,,local and global can hv same name but prefernce will be given to local
    int d=2,c=7;
    cout<<glo<<c;
    cout<<"\n"<<d; 
    xyz();
    cout<<glo; //will print 9 coz prefernce to local
    cout<<"hello world";
    return 0;

}



#include<iostream>
using namespace std;
int main()
{

int num1,num2;
cout<<"enter num1 \n";
cin>>num1; //take num1 from user
cout<<"enter num2";
cin>>num2; //take num2 from user
cout<<"sum is"<<num1+num2;

return 0;

}
