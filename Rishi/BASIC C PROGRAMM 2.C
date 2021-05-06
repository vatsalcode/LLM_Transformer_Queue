#include <stdio.h>

int main()
{
    //%d represents an integer decimal number
    int a, b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d", &a, &b);
    printf("The sum of two numbers %d and %d is:%d", a, b, a + b);
    //first %d correspons to a
    //second %d correspons to b
    //third %d correspons to a+b
    //This is according to the numbers given after comas
    return 0;
}
