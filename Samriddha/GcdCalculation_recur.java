import java.util.Scanner;
class GcdCalculation
{
	long greater(long a,long b)
	{
	 if(a!=b)
	 {
	    if(a>b)
		a=a-b;	
	    else		
	  	b=b-a;    	
	    return greater(a,b);
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
  	 System.out.println("Gcd of two numbers is="+g.greater(n1,n2));
	}
}
