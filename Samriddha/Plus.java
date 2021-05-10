import java.util.Scanner;
public class Plus
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
                     if(i!=n)
	        {
 
                             j=1;
		
                	do
                              {      if(j==n)
                                   System.out.print(c);
                                System.out.print(" ");
                                 
		 
                    	    j++ ;
                           }while(j<=n);
                       }
	      else
	      {
                    	   j=1;
		do {
                             
                    	
                               System.out.print(c);
			 j++;
 
                        }while(j<=n*2-1);
                
                       
		 
    	}
	 System.out.println();
	i++; 
	    
               } while(i<=n*2-1);           
           
 
                
    }
 
}
