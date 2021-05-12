#include<stdio.h>
void swap(int *a, int *b)
{
   int t;
   t = *a;
   *a = *b;
   *b = t;
}
int CPartition(int a[], int l, int h) {
   int pi, in,  n ,i , k;
   in = l;
   pi = h;
   for(i=l; i < h; i++) {
      if(a[i] < a[pi]) {
         swap(&a[i], &a[in]);
         in++;
      }
   }
   swap(&a[pi], &a[in]);
   return in;
}
int Partition(int a[], int low, int high, int k) {
   int p_in ,n ;
   if(low < high) {
      p_in = CPartition(a, low, high);
      if(p_in == k-1)
         return k-1;
      else if(p_in > k-1)
         Partition(a, low, p_in-1, k);
      else
         Partition(a, p_in+1, high, k);
   }
}
int main() {
   int n=7, i, k, k_k;
   int a[n];
   printf("Enter element : ");
   for(i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }
   printf("\nEnter the k for the kth smallest element: ");
   scanf("%d", &k);
   k_k = Partition(a, 0, n-1, k);
   printf("\nThe kth smallest element: %d",a[k_k]);
   return 0;
}
