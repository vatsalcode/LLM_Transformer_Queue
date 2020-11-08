#include <stdio.h>
int main()
{int a[10],b,i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i;j<n;j++)
  {
    if(a[i]>a[j])
   {
   b=a[i];
   a[i]=a[j];
  a[j]=b;
 }
 }
 }
 for(i=0;i<n;i++)
 {
 if(a[i]%2!=0)
   printf("%d\n",a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]%2==0)
 printf("%d\n",a[i]);
 }

 return 0;
}
