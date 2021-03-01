import java.util.*;
class PrimeAdan
{
    boolean isPrime(int n) 
    {
        int c = 0;
        for(int i=1; i<=n; i++)
        {
            if(n%i == 0)
            {
                c++;
            }
        }
        if(c == 2)
            return true;
        else
            return false;
    }
     
    int reverseNum(int n) 
    {
        int r = 0, d = 0;
        while(n > 0)
        {
            d = n%10;
            r = r*10 + d;
            n = n/10;
        }
        return r;
    }
     
    boolean isAdam(int n) 
    {
        int rev = reverseNum(n);
        int sqn = n*n;
        int sqr = rev * rev; 
        int rsqn = reverseNum(sqn); 
        if(rsqn == sqr)
            return true;
        else
            return false;
    }
     
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the lower limit : ");
        int m = sc.nextInt();
        System.out.print("Enter the upper limit : ");
        int n = sc.nextInt();
 
        PrimeAdan ob = new PrimeAdan();
 
        if(m<1 || n<1 || m>n) 
        {
            System.out.println("INVALID INPUT");
        }
        else
        {
            int c = 0;
            System.out.println("THE PRIME-ADAM INTEGERS ARE:");
            for(int i=m; i<=n; i++)
            {
                if(ob.isPrime(i) && ob.isAdam(i)) 
                {
                    c++;
                    System.out.print(i + "\t");
                }
            }
            if(c == 0)
            System.out.print("NIL");
            System.out.println("\nFREQUENCY OF PRIME-ADAM INTEGERS IS:" + c);
        }
    }
}
