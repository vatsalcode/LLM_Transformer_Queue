1) Learned about Inline functions
2) Learned about default arguments
3) Learned about constant arguments
4) Learned about static variable

#include<iostream>

using namespace std;

inline int  product(int a, int b)
{
    return a*b;
}

int main()
{
    int a,b;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    cout<<"the product is"<<product(a,b)<<endl;
    cout<<"the product is"<<product(a,b)<<endl;
    cout<<"the product is"<<product(a,b)<<endl;
    cout<<"the product is"<<product(a,b)<<endl;
    cout<<"the product is"<<product(a,b)<<endl;
    
    return 0;

}
