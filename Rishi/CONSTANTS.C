#include <stdio.h>
#define PI 3.14 //Pre processor constant

int main()
{
    const int b = 5;
    printf("%d\n", b);
    //b=10;  This will throw error as b is constant
    printf("%f\n", PI);
    // PI=7.5; This will also show error as it is pre-processor constant
    printf("%f", PI);
    return 0;
}
