java.util.Scanner;
class Power
{
   long r1=1;
 
   Pow(long n1,long p1)
  {
 
    if(n1>=0&&p1==0)
    r1 =1;
    else if(n1==0&&p1>=1)
    r1=0;
    else
      for(int i=1;i<=p1;i++)
        r1=r1 *n1;
  }
}
class Power
{
   public static void main(String args[])
   {
 
    long n,p;
 
    Scanner sc=new Scanner(System.in);
 
    System.out.println("enter number");
 
    n=sc.nextLong();
 
    System.out.println("enter power");
 
    p=sc.nextLong();
 
    Pow k=new Pow(n,p);
 
   System.out.println(n+"^"+p+"="+k.r1);
 
   }
}
