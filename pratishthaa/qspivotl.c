#include<stdio.h>
int a[10];
//partition function
int Partition(int p,int r)
{
	int i,j,x,temp;
	x=a[r];
	i=p-1;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			i++;
			if(i!=j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	a[r]=a[i+1];
	a[i+1]=x;
	return (i+1);
}
//quick sort function
void QuickSort(int p,int r)
{
	int q;
	if(p<r)
	{
		q=Partition(p,r);
		QuickSort(p,q-1);
		QuickSort(q+1,r);
	}
}
//main function
int main()
{
	int n, i;

	printf("\nEnter size of array ");
	scanf("%d",&n);
	printf("\nEnter %d elements in the array",n);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\nArray before Sorting: ");
	for(i=1;i<=n;i++) 
		printf("%d  ",a[i]);
	QuickSort(1,n);
	printf("\nArray after Sorting: ");
	for(i=1;i<=n;i++) 
		printf("%d  ",a[i]); 
	return 0;
}

