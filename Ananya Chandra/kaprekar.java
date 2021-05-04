// to print and count the kaprekar numbers between the entered range 
import java.util.*;
class kaprekarcount
{
public void fun()
{
Scanner sc= new Scanner(System.in);
System.out.println(" enter the range");
int p= sc.nextInt();
int q=sc.nextInt();
if(p>q)
System.out.println(" invalid input");
else
{
int d=0;
int r=1;
int count =0;
int n;
System.out.println("the karprekar numbers are : ");
for(int i=p;i<=q;i++)
{
n=i;
String st = Integer.toString(i);
d=st.length();
 r=1;
for(int j=1;j<=d;j++)
{
r=r*10;
}
int t= n*n;
int n1,n2;
n1=t%r;
n2=t/r;
if(n1+n2==n)
{
count++;
System.out.print(n + ",");
}
else 
continue;
}
System.out.println(" the frequency of the karprekar numbers is :" + count);
}
}
}

