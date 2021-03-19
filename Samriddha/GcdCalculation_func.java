import java.util.Scanner;
class GcdCalculation
{
	long greater(long a,long b)
	{
	 while(a!=b)
	 {
	    if(a>b)
		a=a-b;
	    else
		b=b-a;    
	}
	return a;   
	}
}
class Gcd
{
	public static void main(String arg[])	
	{
	GcdCalculation g=new GcdCalculation( );
	 long n1,n2;
	 Scanner sc=new Scanner(System.in);
	 System.out.println("Enter  first number");
                n1=sc.nextLong();
             	 System.out.println("Enter second number");
                n2=sc.nextLong();      
	 if(n1>0 && n2>0)	       	 
  	 System.out.println("Gcd of two numbers is="+g.greater(n1,n2));
	 else
	 System.out.println("Values should be greater than 0 otherwise gcd is 0");
	}
}
