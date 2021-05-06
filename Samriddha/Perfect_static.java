import java.util.Scanner;
class Perfect
{
	public static void main(String arg[])	
	{
	    long n,p;
             	    Scanner sc=new Scanner(System.in);	   	 
	    System.out.println("Enter a number");
                   n=sc.nextLong();
	    p=perfectOrNot(n);
	    if(p==n)
	       System.out.println(n+" is a perfect number");
	    else
	       System.out.println(n+" is not a  perfect number"); 
	 } 
	static long perfectOrNot(long num)
	{
	 long sum=0;
	 for(int i=1;i<=num/2;i++)
	 {
	       if(num%i==0)
	       {
		sum+=i;
	       }
  	}
	   return sum;	
	}
}
