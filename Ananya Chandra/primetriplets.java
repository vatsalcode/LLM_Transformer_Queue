// to print the prime triplets within the given range
import java.util.*;
class primtrip
{
    int c=0;
    public void main()
    {
     Scanner sc= new Scanner(System.in);
     System.out.println(" enter the range");
     int m=sc.nextInt();
     int n=sc.nextInt();
     for(int i=m;i<=n;i++)
     {
         int p1=prime(i,1);
         c=0;
         if((i+2)>n||(i+4)>n||(i+6)>n)
         break;
         int p2= prime(i+2,1);
         c=0;
         int p3=prime(i+4,1);
         c=0;
         int p4=prime(i+6,1);
         c=0;
         if(p1==1&&p2==1&&p4==1)
         System.out.println(i+","+(i+2)+","+(i+6));
         if(p1==1&&p3==1&&p4==1)
         System.out.println(i+","+(i+4)+","+(i+6));
        }
    }
    int prime(int t,int x)
    {
        if(x<t)
        {
          if(t%x==0)
          {
              c++;
            }
            return prime(t,x+1);
        }
        else
        return c;
    }
}
         
