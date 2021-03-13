//Break and continue
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d", &a);
    for (a; a < 7; a++)
    {
        printf("%d", a);
        if (a == 4)
        {
            break;
        }
    }
    int b;
    printf("\nEnter any number\n");
    scanf("%d", &b);
    for (b; b < 7; b++)
    {
        printf("%d", b);
        if (b == 4)
        {
            continue;
        }
        printf(" hlo\n");
    }
//In continue statement it skip to next iteration of while loops
    return 0;
}
