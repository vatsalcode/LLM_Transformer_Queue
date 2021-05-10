//Iterative approach
#include <stdio.h>

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
}
int main()
{
    int b;
    printf("Now we would find n term of fibonacci series\n");
    printf("Enter the term\n");
    scanf("%d", &b);
    printf("The %d term of fibonacci series is: %d", b, fibonacci(b));

    return 0;
}

//Iterative approach is better than recusrive approach
