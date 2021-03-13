import java.util.Scanner;
public class PASTangle
{
   public static void main(String[] args)
    {
 	Scanner sc=new Scanner(System.in);
	System.out.println("Enter N : ");
	int n=sc.nextInt();	 
        System.out.print("Enter Symbol : ");
        char c = sc.next().charAt(0);
        int  i=1,j;
	do
        {
	 j=0;
          do
          {
                  System.out.print(" ");
          }while(j++<(n-i-1));
          j=0;   
          do
          {
              System.out.print(c);
           }while(j++<i*2-2);
          System.out.println();
        } while(++i<n);       ;                  
    }
}
