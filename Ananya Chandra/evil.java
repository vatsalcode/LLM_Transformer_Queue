//to find wether a number is an evil number or not.
import java.util.*;
class EVIL
{
    public void fun()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println(" Enter the positive whole number");
        int N=sc.nextInt();
        int t=0,i=0,c=0;
        int S[]=new int[10];
        if(N<=2||N>=100)
        System.out.println(" NUMBER OUT OF RANGE");
        else
        {
            while(N>0)
            {
                t=N%2;
                S[i]=t;
                i++;
                N=N/2;
            }
            for(int j=0;j<i;j++)
            {
                if(S[j]==1)
                c++;
            }
            if(c%2==0)
            System.out.println("EVIL NUMBER");
            else
            System.out.println("NOT AN EVIL NUMBER");
        }
    }
}

           
