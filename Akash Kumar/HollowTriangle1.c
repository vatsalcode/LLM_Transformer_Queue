/* 
Write a C code to print hollow left arrow using star pattern. The number of coloums (N) is taken from test case. For example for N = 6 the output will be 

     *                                                                 
    **                                                                 
   * *                                                                 
  *  *                                                                 
 *   *                                                                 
*    *                                                                 
 *   *                                                                 
  *  *                                                                 
   * *                                                                 
    **                                                                 
     *  

*/ 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    // int n=6;
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(((i+j)==n-1)||(j==n-1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--)
    {
       
        for(j=0;j<=n-1;j++)
        {
            if(((i+j)==n-1)||(j==n-1))
            printf("*");
            else
            printf(" ");
        
        }
        printf("\n");
    }
    
    return 0;
}
