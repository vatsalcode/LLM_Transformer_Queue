#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); /* An integer number taken as input from test cases */


int i=1,sum=0;
 
  
 
  while(i<N){
      if(N%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==N)
      printf("%d is a perfect number.\n",N);
  else
      printf("%d is not a perfect number.\n",N);
 
  return 0;
}
