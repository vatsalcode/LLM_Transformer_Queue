	
class Lcm
{
	public static void main(String args[])	
	{
             	    long n1,n2,i=2,lcm,b;
	    n1=Long.parseLong(args[0]);
	    n2=Long.parseLong(args[1]);
	    if(n1>n2)
		lcm=n1;
	    else
		lcm=n2;
	  b=lcm;
	   while(lcm%n1!=0 || lcm%n2!=0)
		{
		lcm=b*i;
		i++;
		}
 
 	 System.out.println("LCM of "+n1+" and "+n2+" is ="+lcm);
	}
}
