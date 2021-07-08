class Depreciation
{
	public static void main(String arg[])	
	{
                long amount,deppercent,year,afterdep,temp;
	 amount=Long.parseLong(arg[0]);
	 deppercent=Long.parseLong(arg[1]); 
	 year=Long.parseLong(arg[2]);
	 System.out.println("amount is = "+arg[0]);
	 System.out.println("Depreciation percent = "+arg[1]);
	 System.out.println("number of years = "+arg[2]);
	 
              	 temp=amount;
	 for(int i=0;i<year;i++)
	 temp=((100-deppercent)*temp)/100;
	 System.out.println("after depreciation = "+temp);
	
	    
	}
}
