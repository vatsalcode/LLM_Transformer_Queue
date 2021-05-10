//smith number
import java.util.*;
class Smith
{
    int sumofdigits(int r)
    {
        if(r>0)
        return (r%10)+sumofdigits(r/10);
        else 
        return 0;
    }
    boolean prime(int m)
    {
        int c=0;
     for(int i=2;i<=m;i++)
     {
         if(m%i==0)
         c++;
        }
        if(c==1)
        return true;
        else
        return false;
    }
    public void main()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println(" enter the number");
        int n= sc.nextInt();
        Smith ob = new Smith();
        if(ob.prime(n))
        System.out.println(" wrong input");
        else
        {
        int digisum=ob.sumofdigits(n);
        int S=0;
        for(int i=2;i<n;i++)
        {
          if(n%i==0)
          {
              if(ob.prime(i))
              {
              while(n%i==0)
              {
              S=S+ sumofdigits(i);
              n=n/i;
            }
            }
        }
        }
        if(S==digisum)
        System.out.println(" Smith number");
        else
        System.out.println(" not a smith number");
    }
}
}
        
