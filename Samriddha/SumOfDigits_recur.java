import java.util.Scanner;
class SumOfDigits
 
{
	int sum=0;
	int sum(long num)
	{
	
	   if(num!=0)
	    {
		sum+=num%10;
		num/=10;
		sum(num);
	    }
	return sum;
	}
 
	public static void main(String arg[])	
	{
	    long n,res;
	    SumOfDigits s=new SumOfDigits();
             	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter a number ");
                   n=sc.nextLong();
	 
	    System.out.println("Sum of digits of a number is "+s.sum(n));
                   	  
	}
}
