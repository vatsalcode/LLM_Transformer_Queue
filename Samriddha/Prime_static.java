import java.util.Scanner;
class Prime
{
	public static void main(String arg[])	
	{
 
               System.out.println("Enter a number ");
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	primeCal(n);
	}
   static void primeCal(int num)
   {
	int count=0;
	for(int i=1;i<=num;i++)
	{
	   if(num%i==0)
	   {
	        count++;	        
	   }
	}
	if(count==2)
	       System.out.println("prime number ");
	else
	System.out.println("Not a prime number ");        
   } 
}
