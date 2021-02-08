
//WAP to input a number and check whether it is an armstrong number or not.//
import java.util.*;
class Armstrong
{
  boolean checkArmstrong(int num)
  {
      int sum=0;
      for(int copy=num;copy!=0;copy/=10)
      {
          int digit=copy%10;
          sum=sum+digit*digit*digit;
        }
      if(sum==num)
      return true;
      else
      return false;
    }
  public static void main()
  {
      Scanner scan=new Scanner(System.in);
      Armstrong obj=new Armstrong();
      int n;
      System.out.println("Enter a number");
      n=scan.nextInt();
      boolean r=obj.checkArmstrong(n);
      if(r==true)
      System.out.println("ARMSTRONG NUMBER");
      else
      System.out.println("NOT AN ARMSTRONG NUMBER");
    }
}
