//String functions
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[56];
    puts(s1);
    puts(s2);
    puts(strcat(s1, s2)); //Now new s1 will be s1+s2
    printf("\nThe length of the string s1 is %d:\n", strlen(s1));
    printf("The length of the string s2 is %d:\n", strlen(s2));
    printf("The reversed string s2 is:");
    puts(strrev(s2));
    strcpy(s3, s2);
    printf("The copied string of s2 is:");
    puts(s3);
    printf("The strcmp of s1 and s2 is: %d", strcmp(s1, s2));
    //It will return 0 if both strings are same
    //Positive value if first unmatched character of s1 is greater than s2
    //negative value is fisrt unmatched character of s2 is less than s2
    //Also on the basis of Ascii characters
    return 0;
}
