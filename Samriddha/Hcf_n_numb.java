import java.util.Scanner;
class Hcf
{
public static void main(String arg[])	
{	
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter  a number");
    int n=sc.nextInt();
    long  input[]=new long[n];
    System.out.println("Enter "+ n+" numbers");
    for(int i=0;i<n;i++)
    {
	input[i]=sc.nextLong();     
 
    }
     long result = input[0];
     for(int i = 1; i < input.length; i++)
     {
     result= hcf(result, input[i]);
     }     
     System.out.println("HCF="+result);
  }
}
static long hcf(long a,long b)
  {
    while (b > 0)
    {
        long temp = b;
        b = a % b; 
        a = temp;
    }
    return a;
   }
}
