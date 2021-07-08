java.util.Scanner;
class Power
{
   static long r=1;
   public static void main(String arg[])
   {
      long n,p;
      
      Scanner sc=new Scanner(System.in);
 
      System.out.println("enter number");
 
      n=sc.nextLong();
 
      System.out.println("enter power");
 
      p=sc.nextLong();
 
      Power.pow(n,p);
 
      System.out.println(n+"^"+p+"="+r);
   }
 
 static void  pow(long n,long p)
 {
 
    if(p<=0)
    {
       return;
    }
     else if(n==0 && p>=1)
    { 
       r=0;
       return;
    }
    else
       r=r*n;
 
    Power.pow(n,p-1);
}
 
}
