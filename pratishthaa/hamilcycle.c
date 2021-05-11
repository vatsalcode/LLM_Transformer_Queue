#include<stdio.h>
#include<stdlib.h>
void hamiltonian(int k);
void next_value(int k);
int x[10],g[10][10],n,flag=0;
int main()
{
	int ch,i,j,e,v1,v2;
	printf("\nEnter the number of vertices in the graph : ");
	scanf("%d",&n);
	printf("Graph is \n1=Directed\n2=Undirected");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			g[i][j]=0;
		}
	}
	switch(ch)
	{
		case 1 : printf("Enter the number of edges in the directed graph : ");
		         scanf("%d",&e);
		         printf("Enter the pair of vertices having edge between them : \n");
		         for(i=1;i<=e;i++)
		         {
		         	scanf("%d%d",&v1,&v2);
		         	g[v1][v2]=1;
				 }
				 break;
				 
		case 2 : printf("Enter the number of edges in the undirected graph : ");
		         scanf("%d",&e);
		         printf("Enter the pair of vertices having edge between them \n");
		         for(i=1;i<=e;i++)
		         {
		         	scanf("%d%d",&v1,&v2);
		         	g[v1][v2]=1;
		         	g[v2][v1]=1;
				 }
				 break;		 
			
		default : printf("Enter valid choice.");		 
	}
	printf("\nMatrix representation is : \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",g[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	   x[i]=0;
	x[1]=1;
	hamiltonian(2);
	if(flag==0)
	  printf("\nNo hamiltonian cycle exist.");
	return 0;
}

void hamiltonian(int k)
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
		    flag=1;
			printf("\nHamiltonian cycle-%d\n",count);
			for(i=1;i<=n;i++)
			   printf("%d\t",x[i]);   
		}   
		else 
		   hamiltonian(k+1);   
	}while(k<=n);
	if(count == 0)
	   printf("\nNo Hamiltonian cycle exist.");
}

void next_value(int k)
{
	int j;
	do
	{
		x[k]=(x[k]+1)%(n+1);
		if(x[k]==0)
		   return;
		if(g[x[k-1]][x[k]] == 1)
		{
			for(j=1;j<=k-1;j++)
			{
				if(x[k]==x[j])
				  break;
			}
			if(j==k)
			{
				if((k<n) || (k==n && g[x[k]][x[1]]==1))
				   return;
			}
		}   
	}while(x[k]!=0);
}
