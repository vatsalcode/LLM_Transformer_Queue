import java.util.Scanner;
public class Eight
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
	 int k=n*2-1;
 
           do
               {
                    if(i==1 || i==n || i==k)
                  {
	         j=1;
                       do
                        {      if(j==1  || j==n)
                               System.out.print(" ");
                               else
                                System.out.print(c);
                                 
		j++;
                
                    	
                           }while(j<=n);
                    }
                    else
	       {
                        
                            j=1;
                         do
                
                        {      if(j==1 || j==n)
                               System.out.print(c);
                               else
                                System.out.print(" ");
                                 
		 
                    	 j++;
                           }while(j<=n);
		 
                       }
	 System.out.println();
                  i++;
	    
               }while(i<=k);            
           
                
    }
}
