	
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
 
	amount= (s*markedprice)/100;
 
	System.out.println("amount after discount="+amount); 
 
	}
}
