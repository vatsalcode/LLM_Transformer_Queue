import java.util.*;
class Spallindrome
{
    public static void main()
    {
        Scanner sc = new Scanner (System.in);
        String a="";
        int l=0;
        System.out.println("Enter the string u want to check");
        a= sc.next();
        l=a.length();
        String pal="";
        for(int i=0;i<l;i++)
            pal=a.charAt(i)+pal;
        if (pal.compareTo(a)==0)
        {System.out.println("It is pallindrome string");}
        else{
            System.out.println("It is not a pallindrome string");
        }
    }
}
