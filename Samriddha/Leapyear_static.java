import java.util.Scanner;
class Leapyear
{
	public static void main(String arg[])	
	{
	    long year;
             	    Scanner sc=new Scanner(System.in);
	    System.out.print("enter  any calendar year :");
                   year=sc.nextLong();	     
	     leapOrNot(year);  
	}
	static void leapOrNot(long year)
	{
	if(year!=0)
	{
	   if(year%400==0)
                  	System.out.println(year+" is a leap year");
                  else  if(year%100==0)
	    	System.out.println(year+" is not a leap year");
                   	else if(year%4==0)                    
	    		System.out.println(year+" is a leap year");
                     	       else 
	   		 System.out.println(year+" is not a leap year");                       
 	 }
	else
		System.out.println("Year zero does not exist ");                       
 	}
}
