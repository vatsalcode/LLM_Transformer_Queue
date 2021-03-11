//Pointers
#include <stdio.h>
int main()
{
    //%p is the format specifer  used in pointig adress
    printf("Lets begin with pointers");
    int a = 76;
    int *ptr = &a;
    int *ptr2;
    int *ptr3 = NULL;
    printf("The value of a is %d\n", a);
    printf("The value of adress of a is %p\n", &a);
    printf("The value of ptr is is %p\n", ptr);
    printf("The value of derefrence of pointer is %d\n", *ptr);
    printf("The value of adress of pointer is %p\n", &ptr);
    printf("The value of adress of pointer 2 is %p\n", ptr2);
    printf("The value of adress of pointer 3 is %p\n", ptr3);
    return 0;
}
