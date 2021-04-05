import java.util.Scanner;
class DepreciationCalculation
{
	 long amount,deppercent,year,afterdep,temp;
	 DepreciationCalculation(long amount,long deppercent, long year )
	{
	 afterdep=amount;
	 for(int i=0;i<year;i++)
	 afterdep=((100-deppercent)*afterdep)/100;
	}
}
class Depreciation
{
	public static void main(String arg[])	
	{
                long amount,deppercent,year,afterdep,temp;
	Scanner sc=new Scanner(System.in);
	 System.out.println("enter amount"); 
	amount=sc.nextLong();
	System.out.println("enter Depreciation percentage"); 
	deppercent=sc.nextLong();
	System.out.println("enter  number of years"); 
	 year=sc.nextLong();
	 DepreciationCalculation d=new DepreciationCalculation(amount,deppercent,year);	
	 System.out.println("after depreciation = "+d.afterdep);
	
	    
	}
	
}
