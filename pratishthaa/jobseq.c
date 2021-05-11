#include<stdio.h>
struct job
{
	int id;
	int p;
	int d;
};

void jobseq(struct job*, int n);

main()
{
	int n,i,j;
	struct job jb[10],temp;
	
	printf("\nEnter the number of jobs: ");
	scanf("%d",&n);
	
	printf("\nEnter the job no. profit and deadline of jobs %d",n);
	for(i=1;i<=n;i++)
		scanf("%d%d%d",&jb[i].id,&jb[i].p,&jb[i].d);
	
	printf("\nJob_id\tprofit\tdeadline\n");
	for(i=1;i<=n;i++)
		printf("\n%d\t%d\t%d",jb[i].id,jb[i].p,jb[i].d);
		
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(jb[j].p<jb[j+1].p)
			{
				temp=jb[j];
				jb[j]=jb[j+1];
				jb[j+1]=temp;
			}
		}
	}
	
	printf("\nJob_id\tprofit\tdeadline\n");
	for(i=1;i<=n;i++)
		printf("\n%d\t%d\t%d",jb[i].id,jb[i].p,jb[i].d);
	
	jobseq(jb,n);
	return 0;
}

void jobseq(struct job *jb,int n)
{
	int j[10],k,i,r,profit=0,q;
	jb[0].d=0;
	j[0]=0;
	j[1]=1;
	k=1;
	profit=profit+jb[1].p;
	
	for(i=2;i<=n;i++)
	{
		r=k;
		while(jb[j[r]].d > jb[i].d && jb[j[r]].d != r)
			r=r-1;
		if(jb[j[r]].d <= jb[i].d && jb[i].d >r)
		{
			for(q=k;q>=r+1;q--)
				j[q+1]=j[q];
			j[r+1]=i;
			k=k+1;
		}
	}
	
	for(i=2;i<=k;i++)
		profit=profit+jb[i].p;
		
	printf("\nSubsets of job are:\t { ");
	for(i=1;i<=k;i++)
	{
		printf("%d ",jb[j[i]].id);
	}
	printf("}\nTotal profit=%d",profit);
}
