#include <stdio.h>
#define MAX 100
char *reverse(char[]);

int main()
{
    char str[MAX], *rev;
    //printf("Enter a String: ");
    scanf("%s", str);
    rev = reverse(str); //You have to write this function
    printf("The reversed string is : %s\n", rev);
    return 0;
}

char* reverse(char str[])
{
    static int i= 0;
    static char rev[MAX];
    if (*str)
    {
        reverse(str+1);
        rev[i++]= *str;
    }
    return rev;
}
