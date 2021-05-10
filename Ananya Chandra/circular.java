// to find wether a prime number is circular prime or not.
import java.util.*;
class Circular
{
    public void main()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println(" enter the number");
        int n=sc.nextInt();
       
        boolean L=prime(n);
        if(L==true)
        {
           int num =n;
           int t=n,c=0,r=1,k=0,S;
           while(t>0)
           {
               t=t/10;
               c++;
               r=r*10;
            }
            r=r/10;
            int times=c;
            while(times>0)
            {
                S=(n%r)*10+(n/r);
                if(prime(S))
                times--;
                else
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                System.out.println(num+"IS A CIRCULAR PRIME");
            }
            else
            {
                System.out.println(n+"IS NOT A CIRCULAR PRIME");
                }
            }
            else
            {
                System.out.println(n+"IS NOT A CIRCULAR PRIME");
                }
            }
            boolean prime(int v)
        {
            int p=0;
            for(int i=1;i<v;i++)
            {
                if(v%i==0)
                p++;
                else
                continue;
            }
            if(p==1)
            return true;
            else
            return false;
        }
    }
                
               
                
           
