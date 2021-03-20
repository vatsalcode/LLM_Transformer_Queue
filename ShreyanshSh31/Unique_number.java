import java.util.*;
class unique_number
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the number you want to check");
        int n=sc.nextInt();
        String a=Integer.toString(n);
        int len=a.length();
        int flag=0;
        int i;
        int j;
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
                if(a.charAt(i)==a.charAt(j))
                {
                    flag=1;
                    break;
                }
        }
        if (flag==0)
        System.out.println("It is a Unique Number");
        else
        System.out.println("It is not a Unique Number");
    }
}
        
