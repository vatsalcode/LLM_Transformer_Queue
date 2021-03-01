import java.util.*;
class MobiusFn
{
    int n;
     
    MobiusFn()
    {
        n = 0;
    }
     
    void input()
    {
        Scanner sc = new Scanner(System.in);    
        System.out.print("Enter a number : ");
        n = sc.nextInt();
    }
     
    
    int primeFac()
    {
        int a=n, i=2, m=0, c=0, f=0;
             
        while(a > 1) 
        {
            c = 0; 
            while(a%i == 0) 
            {
                c++; 
                f++; 
                a=a/i;
            }
                i++;
 
            if(c > 1) 
                return 0;
        }
        return f; 
    }
     
    void display() 
    {
        int mob,x;
        if(n == 1) 
            mob = 1;
        else
        {
            x = primeFac();
            if(x == 0) 
                mob = 0;
            else 
                mob = (int)Math.pow(-1,x);
        }
        System.out.println("Value of Mobius Function : "+mob);
    }
     
    public static void main(String args[])
    {
        MobiusFn ob = new MobiusFn();     
        ob.input();
        ob.display();     
    }
}
