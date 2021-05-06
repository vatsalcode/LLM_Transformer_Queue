//Given two numbers a and b add then and subtact them and assign them to a and b using call by refrence
#include <stdio.h>
void add(int *x, int *y)
{
    int c = ((*x) + (*y));
    printf("The value of a becomes: %d\n", c);
}
void subtract(int *p, int *q)
{
    int d = ((*p) - (*q));
    printf("The value of b becomes: %d", d);
}
int main()
{
    int a, b;
    printf("Enter the value of number 1:\n");
    scanf("%d", &a);
    printf("Enter the value of number 2:\n");
    scanf("%d", &b);
    add(&a, &b);
    subtract(&a, &b);

    return 0;
}
