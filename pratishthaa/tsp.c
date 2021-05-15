#include<stdio.h>
void min_heapify(int a[], int i, int n)
{
	int l,r,small=i,temp;
	l=2*i;
	r=2*i+1;
	if(l<=n && a[l]<a[i])
		small=l;
	else
		small=i;
	if(r<=n && a[r]<a[small])
		small=r;
	if(i!=small)
	{
		temp=a[i];
		a[i]=a[small];
		a[small]=temp;
		min_heapify(a,small,n);
	}
}

void create_minheap(int a[],int n)
{
	int i;
	for(i=n/2; i>=1; i--)
		min_heapify(a,i,n);
}

void main()
{
	int a[20],i,n;
	
	printf("\nenter size of array: ");
	scanf("%d",&n);
	
	printf("\nenter %d elements:\n",n);
	for(i=1;i<=n;i++) 
		scanf("%d",&a[i]);
		
	printf("\nArray elements are:\t");
	for(i=1;i<=n;i++) 
		printf("%d\t",a[i]);
		
	create_minheap(a,n);
	
	printf("\nmin heap elements are:\t");
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
}
