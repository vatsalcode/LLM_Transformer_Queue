import java.util.Scanner;
public class MTangle
{
    public static void main(String[] args)
    {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter N : ");
	int n=sc.nextInt();	 
               System.out.print("Enter Symbol : ");
	char c = sc.next().charAt(0);
        	int  i=0,j;
	do
               {
                 j=0;
                  do
                       {
                               System.out.print(" ");
                       }while(++j<n-i);
	 j=0;
                  do
                   {
                               System.out.print(c);
                   }while(j++<i);
                    System.out.println();
               }while(++i<n);         
    }
}
