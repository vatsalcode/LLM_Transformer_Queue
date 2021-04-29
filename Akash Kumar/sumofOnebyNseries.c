#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N); /*Read the value of N from test cases provided*/


int i;
for(i=1;i<=N;i++)
sum = sum + ((float)1/(float)i);
printf("Sum of the series is: %.2f\n",sum);
}
