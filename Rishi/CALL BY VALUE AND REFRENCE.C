//Call by value and refrence
#include <stdio.h>
void call_by_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void call_by_refrence(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("Enter value of number 1\n");
    scanf("%d", &a);
    printf("Enter value of number 2\n");
    scanf("%d", &b);
    printf("The no's you entered were %d and %d.\n", a, b);
    call_by_value(a, b);
    printf("No's after calling call by values are %d and %d.\n", a, b);
    call_by_refrence(&a, &b);
    printf("No's after calling call by refrence are %d and %d.\n", a, b);
    printf("No's after calling call by refrence are %d and %d.\n", a, b);
    return 0;
}
