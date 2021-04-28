#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    scanf("%d", &n); //Total number of elements

    // Allocate the memory for 'n' number of elements. 
    //Then take the elements as input from test data

element = (float*) calloc(n, sizeof(float));

    if(element == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }

    // Stores the number entered by the user.
    int i;
    for(i = 0; i < n; ++i)
    {
        scanf("%f", element + i);
    }

 // find the largest
    for(i = 1; i < n; ++i)
    {
       if(*element < *(element + i))
         *element = *(element + i);
    }

    printf("Largest element = %.2f\n", *element);

    return 0;
}
