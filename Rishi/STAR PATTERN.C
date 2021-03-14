//Star pattern
#include <stdio.h>

void first_pattern(int p)
{
    for (int j = 0; j < p; j++)
    {
        printf("*");
    }
    printf("\n");
}
void second_pattern(int q)
{
    for (int i = 0; i < q; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    // Triangular star pattern
    int a;

    printf("Enter no of rows\n");
    scanf("%d", &a);
    printf("Here is your triangular pattern\n");
    for (int i = 0; i < a; i++)
    {
        first_pattern(i + 1);
    }

    //Reverse Triangular star pattern
    int b;
    printf("\nEnter no of rows\n");
    scanf("%d", &b);
     printf("Here is your reverse triangular pattern\n");
    for (int r = 0; r < b; r++)
    {
        second_pattern(b - r);
    }

    return 0;
}
