import java.util.*;
class Emrip_Number
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the number that you want to check");
        int n=sc.nextInt();
        int c=0;
        int cQ=0;
        int rev=0;
        for (int copy=n;copy!=0;copy/=10)
        {
            int digit=copy%10;
            rev =rev*10+digit;
        }
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        for(int j=1;j<=rev;j++)
        {
            if(rev%j==0)
            cQ++;
        }
        if(c==2&&cQ==2)
            System.out.println("Emrip Number");
        else
            System.out.println("Not a Emrip Number");
    }
}

