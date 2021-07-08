import java.io.*;
 
public class HSort
{
 
public static void heapify(int a[],int i,int n)
{ 
 
int l=2*i+1;
int r=2*i+2;
 
int temp,largest;
 
if(l<n && a[l]>a[i])
largest=l;
else
largest=i;
 
if(r<n && a[r]>a[largest])
largest=r;
 
if(largest !=i)
{
temp=a[largest];
a[largest]=a[i];
a[i]=temp;
 
heapify(a,largest,n);
}
 
 
}
 
public static void bheap(int a[])
{ 
 
for(int i=(a.length/2)-1;i>=0;i--)
{
 
heapify(a,i,a.length);
 
}
 
}
 
public static void Sort(int a[])
{ 
int temp,j,i;
 
bheap(a);
 
for( i=(a.length)-1; i>0;)
{
temp=a[0];
a[0]=a[i];
a[i]=temp;
heapify(a,0,i--) ;
 
}
 
} 
 
public static void printarray(int a[])
{
System.out.println();
for(int i=0; i < a.length; i++)
{
 
System.out.print(a[i]+" ");
}
 
}
 
public static void main(String[] args) throws IOException
{
 
int n,i;
 
BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
 
System.out.println("enter N: ");
n=Integer.parseInt(b.readLine());
int a[] = new int[n]; 
System.out.println("enter "+n+" elements ");
for(i= 0; i< n; i++)
 
a[i] = Integer.parseInt(b.readLine());
 
System.out.println("elements in array ");
printarray(a);
Sort(a);
System.out.println("\nelements after sorting");
printarray(a);
 
} 
 
}
