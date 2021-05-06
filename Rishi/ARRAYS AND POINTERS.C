//Arrays and pointers
#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = &a;
    printf("%d\n", ptr);
    printf("%d\n", ptr + 1); //This will not add 1 to adress instead it will
                             // move to a new memory location

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Value of element at a position %d is %d\n", 0, arr[0]);
    printf("The adress of first element is %d\n", &arr[0]);  //Both are same thing
    printf("The adress of first element is %d\n", arr);      //Both are same thing
    printf("The adress of second element is %d\n", &arr[1]); //Both are same thing
    printf("The adress of first element is %d\n", arr + 1);  //Both are same thing

    printf("Value of element at a first position is %d\n", *(&arr[0]));  //Both are same thing
    printf("Value of element at a first position is %d\n", *arr);        //Both are same thing
    printf("Value of element at a second position is %d\n", *(arr + 1)); //Both are same thing
    printf("Value of element at a second position is %d\n", *(&arr[1])); //Both are same thing

    return 0;
}
