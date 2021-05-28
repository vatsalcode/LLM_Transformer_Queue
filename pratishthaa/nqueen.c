#include<stdio.h>
#include<stdlib.h>
int x[10] , n=4;
void nqueen(int k);
int place(int k,int i);
void main()
{
	int i;
	for(i=1;i<=n;i++)
	  x[i] = 0;
	nqueen(1);  
}

void nqueen(int k)
{
	int i,j;
	static int ns;
	for(i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			x[k] = i;
			if(k == n)
			{
				ns++;
				printf("\nThe solution-%d:\n",ns);
				for(j=1;j<=n;j++)
				  printf("x[%d]=%d\t",j,x[j]);
			}
			else
			  nqueen(k+1);
		}
	}	
}

int place(int k,int i)
{
	int j;
	for(j=1;j<=k-1;j++)
	{
		if(x[j]==i || (abs(k-j)) == abs(i-x[j]))
		  return 0;
	}
	return 1;
}
