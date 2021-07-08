#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    printf("AND Output = %d\n", a&b);
    printf("OR Output = %d\n", a|b);
    printf("XOR Output = %d\n", a^b);
    printf("Compliment of %d = %d\n",a, ~a);
    printf("Compliment of %d = %d\n",b, ~b);
    return 0;
}
