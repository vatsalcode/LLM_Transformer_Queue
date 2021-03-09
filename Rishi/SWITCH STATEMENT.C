//Switch statements
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("Yor age is 3");
        break;

    default:
        printf("No condition matched");
        break;
    }
    //default is always applied
    //if u dont want it then use break statement

    return 0;
}
