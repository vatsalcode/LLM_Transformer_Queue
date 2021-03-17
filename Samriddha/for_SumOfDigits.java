import java.util.Scanner;
class SumOfDigits
{
	public static void main(String arg[])	
	{
	    long n,sum;
             	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter a number ");
                   n=sc.nextLong();
	    for(sum=0 ;n!=0 ;n/=10)
	    {
		sum+=n%10;
	    }
	    System.out.println("Sum of digits of a number is "+sum);               	  
	}
}
