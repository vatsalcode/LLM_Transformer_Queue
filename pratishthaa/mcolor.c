#include<stdio.h>
#include<stdlib.h>
void mcolouring(int k);
void next_value(int k);
int x[10],g[10][10],n,m;
int main()
{
	int i,j,e,ch,v1,v2;
	printf("\nEnter the number of vertices in the graph : ");
	scanf("%d",&n);
	printf("Graph is\n1=Directed\n2=Undirected\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		   g[i][j]=0;
	}
	switch(ch)
	{
		case 1 : printf("Enter the number of edges in the directed graph : ");
		         scanf("%d",&e);
		         printf("Enter the pair of vertices having edge between them : ");
		         for(i=1;i<=e;i++)
		         {
		         	scanf("%d%d",&v1,&v2);
		         	g[v1][v2]=1;
				 }
				 break;
				 
		case 2 : printf("Enter the number of edges in the undirected graph : ");
		         scanf("%d",&e);
		         printf("Enter the pair of vertices having edge between them : ");
		         for(i=1;i<=e;i++)
		         {
		         	scanf("%d%d",&v1,&v2);
		         	g[v1][v2]=1;
		         	g[v2][v1]=1;
				 }
				 break;		 
				
		default : printf("\nEnter correct choice.");		 
	}
	printf("\nMatrix representation : \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",g[i][j]);
		}
		printf("\n");
	}
	printf("Enter the number of possible colours : ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	   x[i]=0;
	mcolouring(1);
	return 0;   
}

void mcolouring(int k)
{
	int i;
	static int count=0;
	do
	{
		next_value(k);
		if(x[k]==0)
		  return;
		if(k==n)
		{
			count++;
			printf("\nSolution=%d\n",count);
			for(i=1;i<=n;i++)
			  printf("%d\t",x[i]);
			printf("\n");  
		}  
		else  mcolouring(k+1);
	}while(k<=n);
}

void next_value(int k)
{
	int j;
	do
	{
		x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
		  return;
		for(j=1;j<=n;j++)
		{
			if((g[k][j]==1) && (x[j]==x[k]))
			   break;
		}
		if(j == n+1)
		  return;  
	}while(x[k]!=0);
}
