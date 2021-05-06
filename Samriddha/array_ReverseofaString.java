import java.util.Scanner;
class ReverseofaString
{
	public static void main(String[ ] arg)
	{
	String str;
	Scanner scan=new Scanner(System.in);
	System.out.print("Enter a string : ");
	str=scan.nextLine();	
	char[] ch=str.toCharArray(); 
	System.out.println("Reverse of a String is :"); 
	int j=ch.length;
	for(int i=j;i>0;i--)
	{
	System.out.print(ch[i-1]); 
	}
	}
}
