//2d arrays
#include<stdio.h>
int main(){
    int marks[2][2]={{1,2},{1,2}};
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
            printf("The value of %d, %d element is: %d\n",i,j,marks[i][j]);
       }
       
      
   }
   
    return 0;
}
