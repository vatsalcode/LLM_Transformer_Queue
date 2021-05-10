import java.util.Scanner;
class Lcm 
{  
	static int i=2;  
	long lcmCal(long n1,long n2,long temp,long res) 
	{
	  if(res%n2!=0 || res%n1!=0)
		{
		res=temp*i;
		i=i+1;
		return lcmCal(n1,n2,temp,res);
		}
	  return res;
 	 }
	public static void main(String arg[]) 
	{
	    long a,b,r,t,lc;
             	    Scanner sc=new Scanner(System.in);
	    System.out.println("enter  number 1");
                   a=sc.nextLong();
	    System.out.println("enter  number 2");
                   b=sc.nextLong();
	    if(a==0 ||b==0)
	    {
	    System.out.println("Numbers should not be 0");
                   System.exit(0);
	    }
	    Lcm l=new Lcm();
	    if(a>b) 
		r=a;
	    else
		r=b;
	    t=r;
	    lc=l.lcmCal(a,b,t,r);
	    System.out.println("LCM of 2 numbers is ="+lc);
	}
}
