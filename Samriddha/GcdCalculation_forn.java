import java.util.Scanner;
class GcdCalculation
{
       long  r;
	GcdCalculation(long a,long b)
	{
	 while (b > 0)
   	 {
       	  long temp = b;
      	  b = a % b; 
       	  a = temp;
                  r=a;
   	 }
	}	
}
class Gcd
{
public static void main(String arg[])	
{	
  {
   GcdCalculation result;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter  how many numbers you want");
    int n=sc.nextInt();
    long  input[]=new long[n];
    System.out.println("Enter  "+n+"  numbers");
    for(int i=0;i<n;i++)
    {
	input[i]=sc.nextLong();   	  
    }     
     result= new GcdCalculation(input[0],input[1]); 
     for(int i = 2; i < input.length; i++)
     {
      result= new GcdCalculation(result.r, input[i]);
     }     
     System.out.println("Gcd of n numbers is = "+result.r);
  }
}
}
