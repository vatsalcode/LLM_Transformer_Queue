#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char ch;
	for(int i=0;i<t;i++)
	{
		cin>>ch;
		if(ch=='B'||ch=='b')
		{
			cout<<"Battleship"<<endl;
		}
		if(ch=='C'||ch=='c')
		{
			cout<<"Cruiser"<<endl;
		}
		if(ch=='D'||ch=='d')
		{
			cout<<"Destroyer"<<endl;
		}
		if(ch=='F'||ch=='f')
		{
			cout<<"Frigate"<<endl;
		}
	}
	return 0;
}
