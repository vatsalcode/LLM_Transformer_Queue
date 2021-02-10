import java.util.*;
class FascinatingNumber
{
    boolean isUnique(String q)
    {
        int A[] = {0,0,0,0,0,0,0,0,0,0}; 
        int i, flag = 0;
        char ch;
        for(i=0; i<q.length(); i++)
        {
            ch = q.charAt(i);
            A[ch-48]++; 
           
        }
 
        for(i=1; i<10; i++)
        {
            if(A[i]!=1)
            {
                flag = 1; 
                break;
            }
        }
 
        if(flag == 1)
            return false;
        else
            return true;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        FascinatingNumber ob = new FascinatingNumber();
 
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        String p = Integer.toString(n);
        if(p.length()<3)
            System.out.println("Number should be of atleast 3 digits.");
 
        else
        {
            String s = Integer.toString(n*1) + Integer.toString(n*2) + Integer.toString(n*3);
           
            if(ob.isUnique(s))
                System.out.println(n+" is a Fascinating Number.");
            else
                System.out.println(n+" is not a Fascinating Number.");
        }       
    }
}
