class Leapyear
{
     int leap(int year)
     {
               int c=0;
	{
	   if(year%400==0)
		c=1;
                  else  if(year%100!=0)
	            {
		if(year%4==0)                    
	    	     c=1;
	            }  			                     
 	 }   
	 return c;                
          }
	public static void main(String arg[])	
	{
	    int y,a;
             	    Scanner sc=new Scanner(System.in);
	    System.out.print("enter  any calendar year :");
                   y=sc.nextInt();
	    Leapyear l=new	Leapyear();  
	    if(y!=0)
	    {	   
	    a=l.leap(y);  
	    if(a==1)  
	  	System.out.println(y+" is a leap year");
                   else
		System.out.println(y+" is not a leap year");
                   }
	    else
	            System.out.println("year zero does not exist");    
	}
	
	
}
