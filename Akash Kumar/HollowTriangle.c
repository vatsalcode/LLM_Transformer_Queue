#include <stdio.h>
void findrepeated(int arr[], int n);  // find the repeated elements

int main()
{
    int arr[50];
    int i, size;

    scanf("%d", &size); // Size of the Array is taken from the test case

  
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]); //Array elements are taken from test case
    }
   
  findrepeated(arr, size); //You have to write this function

/*  Write the above function which finds the repeated elements and prints the desired output.
Use the printf statement as 
  printf("Total repeated elements = %d\n", variable_name);
  printf("Repeated elements are: ");
  printf("%d ",variable); //use loop to print the elements seperated by a blank space as per the printf statement. 
 */
 
return 0;
}
void findrepeated(int arr[], int n)
{
  int i,j;
  int k=0;
  int temparray[50];
  for(int i = 0; i < n; i++) {  
        for(int j = i + 1; j < n; j++) {  
            if(arr[i] == arr[j]) 
            {
              temparray[k]=arr[j];
              k++;
            }
        }  
    } 
 /* for(int i = 0; i < k; i++) {  
        printf("%d",temparray[i]);
  } */
 	int res = 1;
 
    // Pick all elements one by one
    for (int i = 1; i < k; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (temparray[i] == temparray[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
          
            res++;
    }
  printf("Total Repeated elements = %d\n",res);
  printf("Repeated elements are: ");
  for (int i = 0; i < k; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (temparray[i] == temparray[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
          printf("%d ",temparray[i]);
    }
}
