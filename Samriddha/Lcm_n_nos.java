import java.util.Scanner;
class Lcm 
{ 
    public static void main(String s[])
    {
      Scanner sc=new Scanner(System.in);  
               System.out.println("enter n value");
	int n=sc.nextInt();
               int inputArray[]=new int[n];
	System.out.println("enter "+n+" elements");
	for(int i=0;i<n;i++)
	{
	inputArray[i]=sc.nextInt();	
	}
	 long lcm=lcmCalculation(inputArray[0],inputArray[1]);
	for(int i=2;i<n;i++)
	{
	lcm=lcmCalculation(lcm,inputArray[i]);	
	}
        System.out.println("The Least Common Multiple of "+n+" numbers is : " + lcm);
    }
	static long lcmCalculation(long n1,long n2)
	{
	  long temp,i=2,res;
	  if(n1>n2)
		res=n1;
	  else
		res=n2;
	   temp=res;
	   while(res%n1!=0 || res%n2!=0)
		{
		res=temp*i;
		i++;
		}
	  return res;
 
 	 }
}
