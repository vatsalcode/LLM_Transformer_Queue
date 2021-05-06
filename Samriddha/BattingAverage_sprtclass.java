import java.util.Scanner;
class AvgCalculation
{
    double avg=0;
 
  AvgCalculation(long r,long i,long n)
  {
     if(i==n)
     {
        avg=r;
     }
     else
     {
        avg=r/(i-n);
     }
  }
 
}
 
class BattingAverage
{
   public static void main(String arg[])
   {
      long Matches,runs,innings,notout;
 
      Scanner sc=new Scanner(System.in);
 
      System.out.println("enter the number of matches played");
 
      Matches=sc.nextLong();
 
      while(true)
     {
        System.out.println("enter the number innings batted");
 
        innings=sc.nextLong();
 
        if(innings<=Matches)
          break;
 
        System.out.println("enter the number innings batted correctly <=matches");
      }
 
     while(true)
    {
       System.out.println("enter number of times notout");
 
       notout=sc.nextLong();
 
       if(notout<=innings)
         break;
 
       System.out.println("enter the number times became notout correctly <=innings");
     }
 
     System.out.println("enter runs scored");
 
     runs=sc.nextLong();
 
     AvgCalculation a=new AvgCalculation(runs,innings,notout);
 
     System.out.println("batting average="+a.avg);
 
  }
 
}
