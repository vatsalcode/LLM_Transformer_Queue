#include <stdio.h>

int main()
{
    int a = 6;
    float b = 5.504;
    printf("The value of a is %d and the value of b is %f\n", a, b);
    printf("The value of a is %d and the value of b is %0.4f\n", a, b);
    printf("The value of a is %d and the value of b is %10f\n", a, b);
    printf("The value of a is %d and the value of b is %3.4f\n", a, b); //No effect as there are more values44
    printf("The value of a is %d and the value of b is %6.4f\n", a, b);
    printf("The value of a is %d and the value of b is %7.4f\n", a, b);
    printf("The value of a is %d and the value of b is %-7.4f\n", a, b);
    return 0;
}
