import java.util.Scanner;
public class HItriangle
{
    
 
    public static void main(String[] args)
    {
             
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter N : ");
	int n=sc.nextInt();	 
              System.out.print("Enter Symbol : ");
	
              char c = sc.next().charAt(0);
               int i=n;
                int j;	
              do 
               {
                    
		     if(i==1 || i==n)
             		        {
             		           j=1;
             		           do
            		            {
     	                                 System.out.print(c);
     		                         
    		             }while(++j <=i);
                
   		        }
                  	    else
	    	    {
                         	        j=1;
                                           do
                            		{
                                               if(j==1 || j==i)
                               	     System.out.print(c);
                              	else
                                                 System.out.print(" ");
			 
                                            }while(++j<=i);
                     }
                            System.out.println();
                          
                       
               }  while(--i>0);           
               
    }
}
