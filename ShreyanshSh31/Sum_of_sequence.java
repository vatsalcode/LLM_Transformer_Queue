import java.util.*;
class SOS
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the value of n");
        int n= sc.nextInt();
        int s=0;
        int c;
        int sum=0;
        for (c=1;c<=n;c++)
        {
            s=s*10+c;
            sum=sum+s;
        }
        
        System.out.println("The value is ="+sum);
    }
}
