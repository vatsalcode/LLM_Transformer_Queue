//Recursions
#include <stdio.h>

int factorial(int x)
{
    if (x < 2)
    {
        return 1;
    }
    int y = x * factorial(x - 1);
    return y;
}

int fibonacci(int p)
{
    if (p < 3)
    {
        return 1;
    }
    int r = (fibonacci(p - 1) + fibonacci(p - 2));
    return r;
}

int main()
{
    int a;
    printf("You can find factorial of any number\n");
    printf("Enter any number\n");
    scanf("%d", &a);
    printf("The factorial of number %d is: %d\n", a, factorial(a));

    int b;
    printf("Now we would find n term of fibonacci series\n");
    printf("Enter the term\n");
    scanf("%d", &b);
    printf("The %d term of fibonacci series is: %d", b, fibonacci(b));

    return 0;
}
