import java.util.*;
class DtoB
{
public static void main(String arg[])	
{	
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a decimal number");
    int n=sc.nextInt();
    System.out.print("Binary number is : ");
   binary(n);
   
}
static void  binary(int num)
{
   int i = 0;    
   int  bin[]=new int[100]; 
    bin[0]=0;
   while(num>0)
    {
    bin[i++] = num%2;
    num = num/2;
    } 
    for(int j =i-1;j >= 0;j--)
    {
       System.out.print(bin[j]);
    }
}
}
