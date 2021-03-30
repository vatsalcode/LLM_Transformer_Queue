import java.util.Scanner;
class CompundInterest
{
public static void main(String args[])
{
 
   double amount=0,principle,rate,time,ci,t=1;
 
   Scanner sc=new Scanner(System.in);
 
   System.out.println("enter principle ");
 
   principle=sc.nextDouble();
 
   System.out.println("enter rate");
 
   rate=sc.nextDouble();
 
   System.out.println("enter time");
 
   time=sc.nextDouble();
 
   rate=(1+rate/100);
 
   t=ratecal(rate,time,t);
 
 
   amount=principle*t;
 
   System.out.println("amount="+amount);
 
   ci=amount-principle;
 
   System.out.println("compound interest="+ci);
 
}
static double ratecal(double r,double t,double t1)
{
 
   if(t<1)
   return t1;
   else
   {
    t1*=r;
    return ratecal(r,t-1,t1);
   }
}
 
 
}
