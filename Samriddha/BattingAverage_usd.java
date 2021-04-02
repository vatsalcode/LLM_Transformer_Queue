import java.util.Scanner;
class BattingAverage
{
  public static void main(String arg[])
 {
   double Matches,runs,innings,notout;
 
   double avg;
 
   Scanner sc=new Scanner(System.in);
 
   System.out.println("enter the number of matches played");
 
   Matches=sc.nextDouble();
 
   while(true)
   {
      System.out.println("enter the number innings batted");
 
      innings=sc.nextDouble();
 
      if(innings<=Matches)
        break;
 
      System.out.println("enter the number innings batted correctly <=matches");
    }
 
    while(true)
    {
       System.out.println("enter number of times notout");
 
       notout=sc.nextDouble();
 
       if(notout<=innings)
         break;
 
       System.out.println("enter the number times became notout correctly <=innings");
    }
 
    System.out.println("enter runs scored");
 
    runs=sc.nextDouble();
 
    avg=avgCalculation(runs,innings,notout);
 
    System.out.println("batting average="+avg);
 
  }
 
  static double avgCalculation(double r,double i,double n)
  {
     if(i!=n)
     {
         return r/(i-n);
     }
     else
     {
         return r;
     }
   }
 
}
