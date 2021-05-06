class Depreciation
{
	public static void main(String arg[])	
	{
         long amount,deppercent,year,afterdep,temp;
	 amount=100000;
	 deppercent=10;
	 year=3;
	 temp=amount;
	 for(int i=0;i<year;i++)
	 temp=((100-deppercent)*temp)/100;
	 System.out.println("after depreciation = "+temp);
	
	    
	}
}
