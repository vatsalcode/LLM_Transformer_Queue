/* Write a C program to print X star (*) pattern series using loop.  Where number of rows (N) upto the mid-point of X pattern is taken from the test cases. Also print the line number at the end of each rows. For example: for N = 5 the output pattern will be as follows. 

*       *1
 *     * 2
  *   *  3
   * *   4
    *    5
   * *   6
  *   *  7
 *     * 8
*       *9

*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);  
int count,i,j;
count= N * 2 - 1;
for(i=1;i<=count;i++)
{
  for(j=1;j<=count;j++)
  {
    if(j==i || j == count-i+1)
    {
      printf("*");
    }
    else
    {
      printf(" ");
    }
  }
  printf("%d\n",i);
}
return 0;
}
