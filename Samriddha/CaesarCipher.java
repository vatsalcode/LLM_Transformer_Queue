import java.util.*;
class CaesarCipher
{
    void rot13(String w)
    {
        char ch;
        int a = 0;
        String ans = "";
        for(int i = 0; i<w.length(); i++)
        {
            ch = w.charAt(i);
            if(Character.isLetter(ch))
            {
                a = ch + 13;
                 
                if((Character.isUpperCase(ch) && a>90) || (Character.isLowerCase(ch) && a>122))
                {
                    a = a - 26;
                }
                ch = (char)a;
            }
            ans = ans + ch;
        }
        System.out.println("OUTPUT : The cipher text is :\n"+ans);
    }
     
    public static void main(String args[])
    {
        CaesarCipher ob = new CaesarCipher();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence : ");
        String s = sc.nextLine();
        int L = s.length();
        if(L<4 || L>99)
        {
            System.out.println("INVALID LENGTH");
        }
        else
        {
            ob.rot13(s);
        }
    }
}
