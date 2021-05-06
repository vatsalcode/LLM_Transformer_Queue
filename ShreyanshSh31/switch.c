#include<stdio.h>
int main()
{
    int rating ;
    printf("Enter your rating(1-5)\n");
    scanf("%d",&rating);
    switch(rating)
    {
        case 1: printf("Rating is 1\n");break;
        case 2: printf("Rating is 2\n");break;
        case 3: printf("Rating is 3\n");break;
        case 4: printf("Rating is 4\n");break;
        case 5: printf("Rating is 5\n");break;
        default: printf("Invalid rating\n");
    }
    
    return 0;
}
