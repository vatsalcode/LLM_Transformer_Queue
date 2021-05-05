#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b;
		c=a+b;
		if(c==0)
		{
			cout<<"4"<<endl;
		}
		int sum=0;
		int digit;
		while(c>0)
		{
			digit=c%10;
            if(digit==0)
            sum+=6;
            if(digit==4)
            sum+=4;
            if(digit==1)
            sum+=2;
            if(digit==2 || digit==3 ||digit==5)
            sum+=5;
            if(digit==6 || digit==9)
            sum+=6;
            if(digit==7)
            sum+=3;
            if(digit==8)
            sum+=7;
            c/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
