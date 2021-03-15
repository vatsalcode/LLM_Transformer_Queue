//Strings
#include <stdio.h>
void print(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[] = {'r', 'i', 's', 'h', 'i'};
    print(str); //This will show some garbage value at the end
    char str1[] = {'r', 'i', 's', 'h', 'i', '\0'};
    print(str1); //This will not show any garbage value as we have given a null character at the end
    char str2[] = "rishi";
    print(str2); //This will not give any garbage value as double quotes automatically have an null character
    char str3[5] = "rishi";
    print(str3); //This will give any garbage value as there is no space for null character

    char str4[1]; //This means that string can have a maximun length of 33 and end with null character
    gets(str4);
    print(str4);          //all will print the value of sting we enter
    printf("%s\n", str4); //all will print the value of sting we enter
    puts(str4);           //all will print the value of sting we enter
    //Using scanf u cant take blank spaces

    char str5[10];
    scanf("%s", &str5);
    printf("%s", str5); //This will only print first word upto space

    return 0;
}
