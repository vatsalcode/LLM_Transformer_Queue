import java.util.Scanner;
class DistanceBwPoint
{
	public static void main(String args[])
	
	{     	long x1,x2,y1,y2;
 
		double dis;
 
                x1=Long.parseLong(args[0]);
		
                y1=Long.parseLong(args[1]);
 
	        x2=Long.parseLong(args[2]);
		
                y2=Long.parseLong(args[3]); 
		     
	        dis=Math.sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
 	 	        
  	        System.out.println("distancebetween"+"("+x1+","+y1+"),"+"("+x2+","+y2+")===>"+dis);
 
	}
}
