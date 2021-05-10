 import java.util.Scanner;
public class Rarrow
{
    
 
    public static void main(String[] args)
    {
             
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter N : ");
	int n=sc.nextInt();	 
              System.out.print("Enter Symbol : ");
	
              char c = sc.next().charAt(0);
                	
              int i=0;
              int j;
	 do
               {
	          j=0;
	
                       do
                        {
                              if(j<i)
                               System.out.print("  ");
		else
                    	
                               System.out.print(c);
		j++;
                        }while(j<n);
		 
    
	 System.out.println();
	i++;
	    
               }while(i<n);            
            i=2;
	do
               {
	         j=0;
		do
		 {
                              if(j<n-i)
                               System.out.print("  ");
		else
                    	
                               System.out.print(c);
		j++;
                
                        }while(j<n);
 
                     
		 
    
	 System.out.println();
	    i++;
               }while(i<=n);    
 
 
                
    }
}
