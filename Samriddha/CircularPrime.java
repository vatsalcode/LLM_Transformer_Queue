import java.util.*;
class CircularPrime
{
    boolean isPrime(int n) 
    {
        int c = 0;
        for(int i = 1; i<=n; i++)
        {
            if(n%i == 0)
                c++;
        }
        if(c == 2)
            return true;
        else
            return false;
    }
     
    int circulate(int n)
    {
        String s = Integer.toString(n);
        String p = s.substring(1)+s.charAt(0);
        int a = Integer.parseInt(p);
        return a;
    }
     
    void isCircularPrime(int n)
    {
        int f = 0,a = n;
        do
        {
            System.out.println(a);
            if(isPrime(a)==false)
            {
                f = 1;
                break;
            }
            a = circulate(a);
        }while(a!=n);
         
        if(f==1)
            System.out.println(n+" IS NOT A CIRCULAR PRIME");
        else
            System.out.println(n+" IS A CIRCULAR PRIME");
    }
     
    public static void main(String args[])
    {
        CircularPrime ob = new CircularPrime();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        ob.isCircularPrime(n);
    }
}
