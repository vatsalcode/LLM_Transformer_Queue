//to convert a number from decimal to hexadecimal.
import java.util.*;
class Hexadecimal
{
public void hexa()
{
Scanner sc= new Scanner(System.in);
System.out.println("Enter the number");
int n= sc.nextInt();
int r;
int S;
String st="";
while(n>0)
{
r=n%16;
n=n/16;
if(r<10)
st=Integer.toString(r)+st;
else
{
S=r%10;
st=(char)(65+S)+st;
}
}
System.out.println(st);
}
}

