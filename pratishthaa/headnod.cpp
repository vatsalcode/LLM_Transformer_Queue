#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ycount=0;
		int icount=0;
		int ncount=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='Y')
			{
				ycount++;
			}
			if(a[i]=='I')
			{
				icount++;
			}
			if(a[i]=='N')
			{
				ncount++;
			}
		}
		if(ncount==n||(ncount==0&&icount>0&&ycount>0)){
            cout<<"NOT SURE"<<endl;
        }
        else if(icount==n||(ncount>0&&icount>0)){
            cout<<"INDIAN"<<endl;
        }
        else if(ycount==n||(ncount>0&&ycount>0)){
            cout<<"NOT INDIAN"<<endl;
        }
	}
	return 0;
}
