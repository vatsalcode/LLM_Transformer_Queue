#include<stdio.h>
 int main()
{
  int a[3][3], i, j;
  long determinant;
 //  9 elements of matrix is taken as input from test data
  for(i = 0 ; i < 3; i++)
      for(j = 0; j < 3; j++)
           scanf("%d", &a[i][j]);


determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]
* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0]*a[1][1]);
if ( determinant == 0)
printf("The given matrix is not invertible");
else
printf("The given matrix is invertible");
return 0;
}
