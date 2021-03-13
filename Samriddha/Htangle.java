import java.util.Scanner;
public class Htangle
{
    
 
    public static void main(String[] args)
    {
             
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter N : ");
	int n=sc.nextInt();	 
               System.out.print("Enter Symbol : ");
               char c = sc.next().charAt(0);
 	int i=1;
	int j;	
	while(i<=n)
               {
                    if(i==1 || i==n)
             	     {
             	           j=1;
             	           while(j <=i)
                           {
     	                 System.out.print(c);
     		  j++;
    	             }
   	      }
                   else
	    {
                	 j=1;
                              while(j<=i)
                            	{
                               if(j==1 || j==i)
                                   System.out.print(c);
                               else
                                   System.out.print(" ");
		 j++;
                             }
                   }
                   System.out.println();
                   i++;    
               }             
    }
}
