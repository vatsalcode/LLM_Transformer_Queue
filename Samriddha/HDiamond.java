import java.util.Scanner;
public class HDiamond 
{
 
public static void main(String[] args)
{
 
Scanner sc=new Scanner(System.in);
System.out.println("Enter N : ");
int n=sc.nextInt(); 
System.out.print("Enter Symbol : ");
 
char c = sc.next().charAt(0);
int i=0;
int j;
while(i<n)
{
j=0;
while(j<n)
 
{
if(j<n-i)
System.out.print(c);
else
 
System.out.print(" ");
j++;
 
}
j=0;
while(j<n)
 
{
 
 
if(j<i)
System.out.print(" ");
else
 
System.out.print(c);
j++;
}
 
 
System.out.println();
i++;
} 
i=1;
while(i<=n)
{
 
j=0;
while(j<n)
{
if(j<i)
System.out.print(c);
else
 
System.out.print(" ");
j++;
}
 
j=0;
while(j<n)
 
{
 
 
if(j<n-i)
System.out.print(" ");
else
 
System.out.print(c);
j++;
}
 
 
System.out.println();
i++;
 
}
 
 
}
}
