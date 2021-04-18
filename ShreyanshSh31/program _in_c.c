#include<stdio.h>

int main()
{
    int maths;
    int chemistry;
    int physics;
    float total;
    printf("Enter maths marks\n");
    scanf("%d",&maths);
    printf("Enter chemistry marks\n");
    scanf("%d",&chemistry);
    printf("Enter Physics marks\n");
    scanf("%d",&physics);
    total = (maths+chemistry+physics)/3;
    if((total<40) || (physics<33)||(maths<33)||(chemistry<33))
    {
        printf("You are failed baat khtm and your total percentage is %f",total);

    }
    else
    {
        printf("you are passed and your total percentage is %f",total);
    }
    
    return 0;
}
