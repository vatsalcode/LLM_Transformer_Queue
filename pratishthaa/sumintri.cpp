#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,i,j,b,l,m,arr[100][100];
		cin>>a;
		for(i=0;i<a;i++)
		{
			for(j=0;j<=i;j++)
			{
				cin>>b;
				arr[i][j]=b;
			}
		}
		for(l=a-1;l>=1;l--)
		{
			for(m=0;m<=l-1;m++)
			{
				if(arr[l][m]>arr[l][m+1])
                {
                    arr[l-1][m]+=arr[l][m];
                }
                else
                {
                    arr[l-1][m]+=arr[l][m+1];
                }
			}
		}
    cout<<arr[0][0]<<endl;
	}
	return 0;
}
