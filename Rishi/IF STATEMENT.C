//If statements
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You cannot vote");
    }
    else
    {
        printf("You can vote");
    }
    return 0;
}
