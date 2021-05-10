#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10],n,i,j,temp;
	printf("Enter Number of Elements you want to input:");
	scanf("%d",&n);
	while(n>10)
	{
		printf("INVALID.ENTER UPTO 10 ELEMENTS ONLY!");
		scanf("%d",&n);

	}
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" ARRAY IS: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("\nNOW, ARRAY IS:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
return 0;
}
