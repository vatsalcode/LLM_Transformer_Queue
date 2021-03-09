import java.util.Scanner; 
import java.io.*;
public class SSort 
{
 
public static void Sort(int a[])
{ 
int n=a.length,i,j,p,temp;
for (i = 0; i < n - 1; i++) 
{ 
p = i; 
for (j=i+1; j < n; j++)
{ 
if (a[p]>a[j]) 
p=j; 
 
} 
temp=a[p];
a[p]=a[i];
a[i]=temp;
 
} 
}
public static void printarray(int a[])
{
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
