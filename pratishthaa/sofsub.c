#include<stdio.h>

int w[10],x1[10],w1[10],m,n;
void sumofsub(int s,int k,int r);
main()
{
	int i,j,r=0,temp;
	printf("\nEnter the number of elements in the set : ");
	scanf("%d",&n);
	printf("\nEnter the value of set : ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&w[i]);
		w1[i]=w[i];
		r+=w[i];
	}
	
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(w1[j]>w1[j+1])
			{
				temp = w1[j];
				w1[j]=w1[j+1];
				w1[j+1]=temp;
			}
		}
	}
	printf("\nEnter the value of m : ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	  x1[i]=0;
	sumofsub(0,1,r);  
}

void sumofsub(int s,int k,int r)
{
	int i,j,l;
	static int ns;
	x1[k]=1;
	if(s+w1[k]==m)
	{
		ns++;
		printf("\nSolution-%d\n",ns);
		for(l=k+1;l<=n;l++)
		  x1[l]=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(w[i]==w1[j])
				  printf("%d\t",x1[j]);
			}
		}
	}
	else if(s+w1[k]+w1[k+1]<=m)
	   sumofsub(s+w1[k],k+1,r-w1[k]);
	   
	if((s+r-w1[k]>=m)&&(s+w1[k+1]<=m))
	{
		x1[k]=0;
		sumofsub(s,k+1,r-w1[k]);
	}   
}
