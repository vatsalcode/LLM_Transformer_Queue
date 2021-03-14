import java.util.*;
class StringReverse
{
    public static void main()
    {
        System.out.println("Enter a String : ");
        new StringReverse().print(new Scanner(System.in).nextLine());
    }
    void print(String s)
    {
        int l = s.length();
        if(l > 0)
        {
            System.out.print(s.charAt(l-1));
            print(s.substring(0 , l-1));
        }
    }
}
