import java.util.*;
class DecimaltoBinary
{
	int  bin[]=new int[100],i = 0;     
	void  binary(int num)
	{
	    if(num>0)
	    {
	    bin[i++] = num%2;
	    num = num/2;
	    binary(num);
	    } 
	    for(i=i-1;i >= 0;i--)
	    {
	       System.out.print(bin[i]);
	    }
	 
	}
public static void main(String arg[])	
{
    DecimaltoBinary d=new DecimaltoBinary();		
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a decimal number");
    int n=sc.nextInt();
    System.out.print("Binary number is : ");
d.binary(n);
   
}
}
