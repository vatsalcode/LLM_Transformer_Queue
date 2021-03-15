//Passing arrays as a function arguements
#include <stdio.h>

int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of element of array at index %d is %d\n", i, array[i]);
    }
    array[0] = 14; //The value will get changed as it is just like pointer method
                   // beacuse we are passing address of array in the function.
    return 0;
}

int func2(int *ptr){
    
    for (int i = 0; i < 4; i++)
    {
        printf("The value of element of array at index %d is %d\n", i, ptr[i]);
          //or
         // printf("The value of element of array at index %d is %d\n", i,*(ptr+i));
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    func(arr);   //We ar giving  the address of an array here
    printf("\n\nThe value at indec 0 now becomes %d \n\n",*arr);
    func2(arr);
    return 0;
}
