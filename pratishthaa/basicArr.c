#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10],n,i;
	printf("Enter Number of Elements you want to input:");
	scanf("%d",&n);
	while(n>10)
	{
		printf("INVALID.Enter a new number");
	    scanf("%d",&n);
    }
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("YOUR ARRAY IS:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
    return 0;
}
