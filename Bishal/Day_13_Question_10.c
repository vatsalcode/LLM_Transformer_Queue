#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Method 1:");
    printf("Your name is %s.", name);
    char str[4096];
    printf("Enter name: ");
    fgets(str, 4096, stdin);
    printf("Method 2:\nYour Name is %s.", str);
    return 0;
}
