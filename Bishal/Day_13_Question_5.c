//Done using Ternary Operator

#include <stdio.h>
void disp()
{
    int x=0,y=0,z=0;
    scanf("%d%d%d",&x,&y,&z);
    (x>y&&x>z)? printf("%d is the largest.", x): (y>x&&y>z)? printf("%d is the largest.", y): printf("%d is the largest.",z);
}
int main()
{
    disp();
    return 0;
}
