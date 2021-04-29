#include <stdio.h>
int main()
{
    int a[100],i, n;
    scanf("%d",&n);  //Number of elements of the array is taken from the test case data 
   
   for (i=0; i<n; i++)
    {
        scanf("%d",a+i); // Input the array elements
    }

int j,t;
for (i=0; i<(n-1); i++)
{
for (j=i+1; j<n; j++)
{
if (*(a+i)>*(a+j))
{
t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
}
}
}
//   Printing sorted array in ascending order 
    for (i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
   }
