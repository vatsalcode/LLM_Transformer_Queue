import java.util.*;
class disarium_number
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("enter a number that you want to check");
        int n=sc.nextInt();
        int c=0;
        int sum=0;
        for(int copy=n;copy!=0;copy/=10)
        {
            int digit =copy%10;
            c++;
        }
        for (int copyQ=n;copyQ!=0;copyQ/=10)
        {
            int digitQ=copyQ%10;
            sum=sum+(int)Math.pow(digitQ,c);
            c--;
        }
        if (sum==n)
        System.out.println("It is a disarium number");
        else
        System.out.println("It is not a disarium number");
    }
}

