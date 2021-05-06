import java.util.*; 
class octalTodecimal
{    
   public static void main(String args[]) 
   {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter the number of which you want a equivalent number");
	String octal = "";
	octal= sc.nextLine();
	
	int num = Integer.parseInt(octal, 8);	
	System.out.println("Decimal equivalent of Octal value is: "+num);
   }
}
