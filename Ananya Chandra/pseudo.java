// pseudo arithimetic sequence
import java.util.*;
class Pseudo
{
public void number()
{
Scanner sc= new Scanner(System.in);
System.out.println(" enter the number of elements");
int n= sc.nextInt();
int a[]=new int[n];
int c=0;
System.out.println(" enter the numbers");
for(int i=0;i<n;i++)
{
a[i]=sc.nextInt();
}
int S= a[0]+a[n-1];
int t;
if(n%2==0)
{
t=n/2;
}
else
{
t=(n+1)/2;
}
for(int i=1;i<t;i++)
{
if(S==(a[i]+a[n-1-i]))
continue;
else
{
c=1;
break;
}
}
if(c==1)
{
System.out.println(" not a pseudo arithematic sequence ");
}
else
System.out.println(" pseudo arithematic sequence");
}
}

