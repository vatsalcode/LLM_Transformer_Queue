#include<stdio.h>

int main () {
    int marks;
    printf("enter your marks\n");
    scanf("%d", &marks);
    if(marks>89 && marks<=100)
    {
        printf("Your grade is A");
    }
    else if(marks>79 && marks<=90) { 
        printf("Your grade is B");
    }
    else if(marks>69 && marks<=80) {
        printf("Your grade is C");
    }
    else if(marks>50 && marks<=70) {
        printf("Your grade is D");
    }
    else {
        printf("Your grade is F");
    }
    return 0;
}
