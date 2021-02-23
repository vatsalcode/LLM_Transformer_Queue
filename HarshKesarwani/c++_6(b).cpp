#include<iostream>
using namespace std;
int main()
{

int marks[4]={23,24,25,26};
//pointers in arrays
int* p=marks;
cout<<*p<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;


return 0;

}
