import java.util.*;
class PronicNumber
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
         
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        int k = (int)(Math.sqrt(n));
        if(k*(k+1)==n)
            System.out.println(n+" is a Pronic Number.");
        else
            System.out.println(n+" is not a Pronic Number.");      
    }
}
