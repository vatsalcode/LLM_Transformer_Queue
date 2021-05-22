#include <stdio.h>
int main()
{
    int a=5,b=10;
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d-%d=%d\n",b,a,b-a);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%.2lf\n",a,b,(double)(a)/b);
    printf("%d/%d=%.2lf\n",b,a,(double)(b)/a);
    return 0;
}
