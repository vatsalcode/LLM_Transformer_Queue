//Loops
#include <stdio.h>
int main()
{
    int i, a, b;
    printf("Enter the number \n");
    scanf("%d", &i);
    //Do while loop
    do
    {
        printf("%d", i);
        i++;
    } while (i < 10);

    //While loop

    printf("\nEnter the number \n");
    scanf("%d", &b);
    while (b < 8)
    {
        printf("%d", b);
        b++;
    }

    //for loops

    printf("\nEnter the number \n");
    scanf("%d", &a);
    for (a; a < 9; a++)
    {
        printf("%d", a);
    }
    return 0;
}
