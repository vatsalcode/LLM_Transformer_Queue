class calcuateDiscount
{
        double amount;    
 
	calcuateDiscount(double markedprice,double s)
	   
	{
	
	amount= (s*markedprice)/100;
 
  	}
 
}
class Discount
{
	public static void main(String args[])
	{
 
	double  dis,amount,markedprice,s;		
               
	markedprice=Double.parseDouble(args[0]);
                 
        dis=Double.parseDouble(args[1]);   
 
	System.out.println("markedprice= "+markedprice);
 
	System.out.println("discount rate="+dis);
         
        s=100-dis;    
 
	calcuateDiscount c=new calcuateDiscount(markedprice,s);                  					
 
	System.out.println("amount after discount="+c.amount); 
 
	}
}
