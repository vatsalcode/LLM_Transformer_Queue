class SumOfDigits
{
	public static void main(String arg[])	
	{
	    long n,sum=0;
             	    System.out.println("Enter a number ");
                   n=Long.parseLong(arg[0]);
	    while(n!=0)
	    {
		sum+=n%10;
		n/=10;
	    }
	    System.out.println("Sum of digits of a number is "+sum);
                   	  
	}
}
