#include<stdio.h>
void prims(int g[20][20],int n);
int near[10];

//main function
int main()
{
	int i,j,n,e,ch,v1,v2,g[20][20],w;
	printf("\nEnter the number of vertices in the graph : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			g[i][j]=999;
		}
	}
	printf("Graph is : 1=Directed\t2=Undirected");
	printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("Enter the number of edges in directed graph : ");
		         scanf("%d",&e);
		         printf("\nEnter the pair of vertices v1-->v2 and weight");
		         for(i=1;i<=e;i++)
		         {
		         	scanf("%d%d%d",&v1,&v2,&w);
		         	g[v1][v2] = w;
				 }
				 break;
			
		case 2 : printf("Enter the number of edges in undirected graph : ");
		         scanf("%d",&e);
				 printf("\nEnter the pair of vertices having edge between them and weight : ");
				 for(i=1;i<=e;i++)
				 {
				 	scanf("%d%d%d",&v1,&v2,&w);
				 	g[v1][v2] = w;
				 	g[v2][v1] = w;
				 }
				 break;
	
		default : printf("\nEnter correct choice.");
		          break;		 		 
	}
	
	//Printing matrix 
	printf("\nMatrix representation of graph is :\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",g[i][j]);
		}
		printf("\n");
	}
	//Calling prims function
	prims(g,n);
	return 0;
}

//Prim's function
void prims(int cost[20][20],int n)
{
	int i,j,k,l,v,costmst=0,min,t[10][2],q,w;
	//finding the minimum cost edge
	
	min=999;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(min > cost[i][j])
			{
				min = cost[i][j];
				k=i;
				l=j;
			}
		}
	}
	
	t[1][1]=k;
	t[1][2]=l;
	costmst = costmst + cost[k][l];
  
	//initialize the near[] value of vertices
	for(i=1;i<=n;i++)
	{
		if(cost[k][i] < cost[l][i])
			near[i] = k;
		else	
			near[i]=l;
	}
	near[k]=0;
	near[l]=0;
	//selecting remaining n-2 edges
	for(i=2;i<n-1;i++)
	{
		min = 999;
		for(q=1;q<=n;q++)
		{
			if(cost[q][near[q]]< min && near[q]!=0)
			{
				min = cost[q][near[q]];
				j = q;
			}
		}
	}
		
	t[i][1] = j;
	t[i][2] = near[j];
	costmst = costmst + cost[j][near[j]];
	near[j]=0;
	
	for(k=1;k<=n;k++)
	{
		if(near[k]!=0 && cost[k][near[k]] > cost[k][j])
		{
			near[k] = j;
		}
	}
	
	printf("\nThe minimum spanning tree is : \n");
	for(i=1;i<=n;i++)
	{
		printf("(%d, %d) cost=%d",t[i][1],t[i][2],cost[t[i][1]][t[i][2]]);
		printf("\n");
	}
	printf("\nCost of minimum spanning tree is : %d",costmst);
}
