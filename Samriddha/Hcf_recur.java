import java.util.Scanner;
class Hcf
{
	int temp;
	int highest(int a,int b)
	{
    	 if(a!=b)
	 {
	    if(a>b)
		a=a-b;	
	    else		
	  	b=b-a;    	
	    return highest(a,b);
	}
	return a;  
   }
 
	public static void main(String arg[])	
	{
	Hcf h=new Hcf( );
	 int n1,n2;
	 Scanner sc=new Scanner(System.in);
	 System.out.println("Enter  first number");
                n1=sc.nextInt();
             	 System.out.println("Enter second number");
                n2=sc.nextInt();             	 
  	 System.out.println("Hcf of two numbers is="+h.highest(n1,n2));
	}
}
