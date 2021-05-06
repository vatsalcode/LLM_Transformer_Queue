import java.util.*;
import java.util.Scanner;
 
class FutureInvestmentValue
{ 
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
       
       System.out.print("Enter present value: ");
 
	double p=sc.nextInt();
 
	 System.out.print("Enter the interest rate: ");
 
	 double r=sc.nextInt();
 
	System.out.print("Enter the time period in years: ");
 
	 double y=sc.nextInt();          
 
      double  e= FIVCalculation(p,r,y);
      
        System.out.print("value is:= "+e+"\n");
                 
    }
	static double  FIVCalculation(double p,double r,double y)
	{
	double fiv=p*Math.pow((1+r/100),y);
	
	return fiv;
	}
}
