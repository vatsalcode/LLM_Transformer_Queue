#include<stdio.h>
#include<stdlib.h>
void checkeven(int num);
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
	printf("ARRAY IS: {");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf(" }");
	for(i=0;i<n;i++)
	{
		checkeven(arr[i]);
	}
	
return 0;
}
void checkeven(int num){
	if(num%2==0)
	  printf("\n%d is Even.",num);
	else
	  printf("\n%d is Odd.",num);
}
