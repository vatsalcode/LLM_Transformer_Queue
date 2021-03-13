import java.util.Scanner;
public class Itriangle
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter N : ");
int n=sc.nextInt(); 
System.out.print("Enter Symbol : ");
char c = sc.next().charAt(0);
int i=n;
do
{
int j=0;
do
{
System.out.print(c);
}while(++j<i);
System.out.println();
} while(--i>0) ; 
}
}
