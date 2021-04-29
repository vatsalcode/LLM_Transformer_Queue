#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases

int i,j;
float b, c, k =0;
for(i=0; i<5; i++)
   {
      b=1;
      c=1;
      for(j=0; j<5; j++)
        {
           if(j!=i)
             {
               b=b*(a-t[j]);
               c=c*(t[i]-t[j]);
              }
            }
        k=k+((b/c)*v[i]);
        }
printf("The respective value of the variable v is: %.2f", k);
  return 0;
}
