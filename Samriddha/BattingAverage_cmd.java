import java.util.Scanner;
class BattingAverage
{
   public static void main(String args[])
   {
      double Mat,inn,notout,avg,run;
 
      Mat=Double.parseDouble(args[0]);
 
      inn=Double.parseDouble(args[1]);
 
      notout=Double.parseDouble(args[2]);
 
      run=Double.parseDouble(args[3]);
 
      System.out.println("Matches="+(long)Mat);
 
      System.out.println("Innings="+(long)inn);
 
      System.out.println("Notout="+(long)notout);
 
      System.out.println("Total runs="+(long)run);
 
      if(inn<=Mat&&notout<=inn)
      {
         avg=run /(inn-notout);
 
         System.out.println("batting average="+avg);
      }
      else
      {
         System.out.println("please enter innings <= matches and notout<=innings" );
      }
 
    }
}
