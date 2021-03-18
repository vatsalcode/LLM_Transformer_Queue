// local,global variables
#include <stdio.h>

int b = 34; //gloabal variable

int func1(int b1)
{
    printf("The value of b inside func 1 is: %d\n",b);
    //printf("The value of address of b inside func 1 is: %d \n", &b);
    return b1 * 10;
}

int main()
{
    int b = 344;
    // printf("The vaue of adress of b inside main  is: %d \n", &b);
    int val = func1(b);
    //We will notice both address are different which means both b are not same
    // The values are actually copied and so address is different
    int *ptr = &val;
    printf("The value of func 1 is %d",val);
    return 0;
}
