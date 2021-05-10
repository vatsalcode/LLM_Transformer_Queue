#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10],n,i;
	int max,min;
	max=min=arr[0];
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
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		   min=arr[i];
		if(arr[i]>max)
		   max=arr[i];
	}
	printf("\nLARGEST ELEMENT = %d\nSMALLEST ELEMENT = %d",max,min);
return 0;
}
