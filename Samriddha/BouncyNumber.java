
import java.util.*;
class BouncyNumber
{
    boolean isIncreasing(int n) 
    {
        String s = Integer.toString(n);
        char ch;
        int f = 0;
        for(int i=0; i<s.length()-1; i++)
        {
            ch = s.charAt(i);
            if(ch>s.charAt(i+1))
            {
                f = 1;
                break;
            }
        }
        if(f==1)
            return false;
        else
            return true;
    }
     
    boolean isDecreasing(int n) 
    {
        String s = Integer.toString(n);
        char ch;
        int f = 0;
        for(int i=0; i<s.length()-1; i++)
        {
            ch = s.charAt(i);
            if(ch<s.charAt(i+1))
            {
                f = 1;
                break;
            }
        }
        if(f==1)
            return false;
        else
            return true;
    }
     
    void isBouncy(int n)
    {
        if(isIncreasing(n)==true)
            System.out.println("The number " + n + " is Increasing and Not Bouncy");
        else if(isDecreasing(n)==true)
            System.out.println("The number " + n + " is Decreasing and Not Bouncy");
        else
            System.out.println("The number " + n + " is bouncy");
    }
     
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        BouncyNumber ob = new BouncyNumber();
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        ob.isBouncy(n);
    }
}
