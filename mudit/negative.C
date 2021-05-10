/*program to print a message if negative number is enteres*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("enter a number   ");
    scanf("%d",&num");
    
    if(num<0)
    {
        printgf("entered number is negative\n");
        num=-num;
    }
    return 0;
}    
    
    
    
