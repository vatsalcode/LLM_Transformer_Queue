#include<iostream>
using namespace std;

int main()
{
    int a=4,b=5;
    //Airthmetic operators
    cout<<"THE VALUE OF A+B IS:\n"<<a+b<<endl;
     cout<<"THE VALUE OF A-B IS:\n"<<a-b<<endl;
      cout<<"THE VALUE OF A*B IS:\n"<<a*b<<endl;
       cout<<"THE VALUE OF A/B IS:\n"<<a/b<<endl;
        cout<<"THE VALUE OF A%B IS:\n"<<a%b<<endl;
         cout<<"THE VALUE OF A++ IS:\n"<<a++<<endl;
          cout<<"THE VALUE OF A-- IS:\n"<<a--<<endl;
           cout<<"THE VALUE OF ++A IS:\n"<<++a<<endl;
            cout<<"THE VALUE OF --A IS:\n"<<--a<<endl;

     // logiacal operators
     cout<<"The value of ((a==b) && (a<b)) logical and operator is:"<<((a==b) && (a<b))<<endl;       
    cout<<"The value of ((a==b) || (a<b)) logical or operator is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of (!(a==b)  logical not operator is:"<<(!(a==b))<<endl; 
    //Comparison operators
cout<<"the value of A==B is :"<<(a==b)<<endl;
cout<<"the value of A!=B is :"<<(a!=b)<<endl;
cout<<"the value of A>=B is :"<<(a>=b)<<endl;
cout<<"the value of A<=B is :"<<(a<=b)<<endl;
cout<<"the value of A>B is :"<<(a>b)<<endl;
cout<<"the value of A<B is :"<<(a<b)<<endl;

return 0;
}
