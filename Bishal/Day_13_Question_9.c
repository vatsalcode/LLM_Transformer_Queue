#include <stdio.h>
#include <stdbool.h>
void size()
{
    printf("int = %ld bytes\n", sizeof(int));
    printf("char = %ld bytes\n", sizeof(char));
    printf("short = %ld bytes\n", sizeof(short));
    printf("double = %ld bytes\n", sizeof(double ));
    printf("boolean = %ld bytes\n", sizeof(bool));
    printf("String = %ld bytes\n", sizeof(char* ));
    printf("long = %ld bytes\n", sizeof(long));
    printf("long long = %ld bytes\n", sizeof(long long));
    printf("float= %ld bytes\n", sizeof(float ));
    printf("long double = %ld bytes\n", sizeof(long double));
}
int main()
{
    size();
    return 0;
}
/*
int = 4 bytes
char = 1 bytes
short = 2 bytes
double = 8 bytes
boolean = 1 bytes
String = 8 bytes
long = 8 bytes(For my 64-bit CPU)
long long = 8 bytes
float= 4 bytes */
