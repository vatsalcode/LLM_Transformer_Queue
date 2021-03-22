import java.util.*;
class GCD 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        while (n1 != n2) {
            if(n1 > n2)
                n1 = n1 - n2;
            else
                n2 = n2 - n1;
        }
        System.out.printf("GCD of given numbers is: %d", n2);
    }
}
