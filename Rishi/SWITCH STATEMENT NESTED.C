// Nested Switch statements 
#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your marks:\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("Yor age is 3 \n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45");
            break;

        default:
            break;
        }
        break;

    default:
        printf("No condition matched");
        break;
    }
    //default is always applied
    //if u dont want it then use break statement

    return 0;
}
