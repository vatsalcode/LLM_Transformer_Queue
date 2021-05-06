import java.util.*;
class HCF
{
  public static void main()
  {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter two numbers to find their GCD.");
      int a = sc.nextInt();
      int b = sc.nextInt();
      HCF obj = new HCF();
      int ret = obj.gcd(a,b);
      System.out.println("The GCD of the numbers is : "+ret);
    }
  int gcd(int x , int y)
  {
      if(y==0)
      return x;
      return gcd(y,x%y);
    }
}
