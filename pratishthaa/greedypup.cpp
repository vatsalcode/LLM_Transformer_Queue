#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c=0;
		cin>>a>>b;
		for(int i = 1;i<=b;i++){
            if(a%i>c){
                c= a%i;
            }
        }
        cout<<c<<endl;
	}
	return 0;
}
