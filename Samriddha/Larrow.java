 import java.util.Scanner;
public class Larrow
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
	do
               {
	        j=1;
		
 
                        do
                        { 
                               System.out.print(" ");
		 
                    	
                           }while(j++<=n-i);
		    j=i;
                          
                do
                        {
                             
                    	
                               System.out.print(c);
		j++;
                        }while(j<=n); 
		 
    
	 System.out.println();
	    i++;
               } while(i<=n);           
           i=1;
 
	do
               {
	          j=0;
		
                do
                        {
                              
                               System.out.print(" ");
		  
		
                        }while(j++<i);
		 j=0;
		do{
                           
                               System.out.print(c);
		j++;
 
                        } while(j<=i);
                
                         
    
	 System.out.println();
	    i++;
               }while(i<n);  
 
 
                
    }
} 
