import java.util.Scanner;
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
	 temp=depreciationCal(amount,deppercent,year);
	 System.out.println("after depreciation = "+temp);
	
	    
	}
	static long depreciationCal(long amount,long deppercent, long year )
	{
	 for(int i=0;i<year;i++)
	 amount=((100-deppercent)*amount)/100;
	 return amount;
	 
	}
}
