import java.util.Scanner;
public class MRhombusstar
{
    
 
    public static void main(String[] args)
    {
             
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter N : ");
	int n=sc.nextInt();	 
              System.out.print("Enter Symbol : ");
	
              char c = sc.next().charAt(0);
               int i=1,j; 
               do
               {
                    j=i;
                    
                      do
                        {
                               System.out.print(" ");
                        } while(--j>0);
                       j=1;
                       do
                        {
                               System.out.print(c);
                        }while(++j<=n);
                   
                            System.out.println();
		    i++;
               }
 	while(i<=n);             
                
    }
}
