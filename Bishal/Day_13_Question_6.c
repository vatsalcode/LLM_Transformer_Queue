#include <stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d\n%d %d %d",&n,&a,&b,&c);
    int array[n];
    array[0]=a;
    array[1]=b;
    array[2]=c;
    for(int i=3;i<n;i++)
    {
        for(int j=i-3;j<i;j++)
        {
            array[i]+=array[j];
        }
    }
    printf("%d",array[n-1]);
    return 0;
}
/*5
 * 7
 * 8
 * 9
 * 41
 * Here I want to find the 5 th term using the method:
 * We have to input the 1st 3 numbers-
 * 1st term = 7
 * 2nd term = 8
 * 3rd term = 9
 * Now the operation starts:
 * 4th term = 1st term+2nd term+3rd term = 7+8+9=24
 * 5 th term = 2nd term+3rd term+4th term = 8+9+24=41
 *
 *
 * 6
 * 1
 * 2
 * 3
 * 20
 * Here I want to find the 6 th term using the method:
 * We have to input the 1st 3 numbers-
 * 1st term = 1
 * 2nd term = 2
 * 3rd term = 3
 * Now the operation starts:
 * 4th term = 1st term+2nd term+3rd term = 1+2+3=6
 * 5 th term = 2nd term+3rd term+4th term = 2+3+6=11
 * 6 th term = 3rd term+4th term+5th term = 3+6+11=20
 */
