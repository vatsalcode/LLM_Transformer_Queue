//Bitwise operator
#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    //It actually converts a and b into binary and the give the final result
    //For bitwise operator use only single command like '&' or '^' or '|'
    printf("a || b= %d\n", a | b); //or operator
    printf("a && b= %d\n", a & b); //and operator
    printf("a ^ b= %d\n", a ^ b);  //exclusive or operator
    printf("a<<1 =%d \n", a << 1); //left shift operator
    printf("a>>1 =%d \n", a >> 1); //Right shift operator
    return 0;
}
