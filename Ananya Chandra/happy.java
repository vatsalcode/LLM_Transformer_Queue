// to check if the number is a happy number.
import java.util.*;
class happy
{
    int n;
    int S=0;
    happy(int nn)
    {
     n=nn;
    }
    void ishappy()
    {
     while(n>9)
      {
      S=0;
      n=sumsqdigits(n);
    }
    if(n==1)
    System.out.println(" happy number ");
    else
    System.out.println(" not a happy number");
    }
    int sumsqdigits(int x)
    {
        if(x>0)
        {
            int r= x%10;
            S=S+r*r;
            return(sumsqdigits(x/10));
        }
        else
        return S;
    }
    public void main()
    {
    Scanner sc= new Scanner(System.in);
    System.out.println(" enter the number ");
    int n1=sc.nextInt();
    happy ob = new happy(n1);
    ob.ishappy();
   }
}
