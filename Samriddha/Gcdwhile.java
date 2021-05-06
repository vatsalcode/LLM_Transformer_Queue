import java.util.Scanner;
class Gcd
{
	public static void main(String arg[])	
	{
	 long x,y;
	 Scanner sc=new Scanner(System.in);
	 System.out.println("enter  number 1");
                x=sc.nextLong();
             	 System.out.println("enter  number 2");
                y=sc.nextLong();  
	 if(n1>0 && n2>0)
	{    	 
	 while(x!=y)
	 {
	    if(x>y)
		x=x-y;
	    else
		y=y-x;
	    
	}   
  	System.out.println("Gcd of two numbers is="+x);
	}
	else
		    System.out.println("Please enter numbers greater than zero");	
	}
}
