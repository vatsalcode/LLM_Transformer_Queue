import java.util.*;
class Niven
{
   boolean checkniven(int num)
   {
       int sum=0;
       for(int copy=num;copy!=0;copy/=10)
       {
           int digit=copy%10;
           sum=sum+digit;
        }
       if(num%sum==0)
       return true;
       else
       return false;
    }
   public static void main()
   {
       Scanner scan=new Scanner(System.in);
       int n;
       System.out.println("ENTER A NUMBER");
       n=scan.nextInt();
       Niven obj=new Niven();
       boolean r=obj.checkniven(n);
       if(r==true)
       System.out.println("NIVEN NUMBER");
       else
       System.out.println("NOT A NIVEN NUMBER");
    }
}
