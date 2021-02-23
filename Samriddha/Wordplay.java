import java.util.*;
class Wordplay
{
    boolean isVowel(String w) 
    {
        int l = w.length();
        char ch1 = w.charAt(0); 
        char ch2 = w.charAt(l-1); 
        if((ch1=='A' || ch1=='E' || ch1=='I' || ch1=='O' || ch1=='U') && 
        (ch2=='A' || ch2=='E' || ch2=='I' || ch2=='O' || ch2=='U'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
 
    public static void main(String args[])
    {
        ISC2016_Q3 ob = new ISC2016_Q3();
        Scanner sc = new Scanner(System.in);
 
        System.out.print("Enter a sentence : ");
        String s = sc.nextLine();
        s = s.toUpperCase();
        int l = s.length();
        char last = s.charAt(l-1); 
 
        /* Checking whether the sentence ends with '.' or '?' or not */
        if(last != '.' && last != '?' && last != '!')
        {
            System.out.println("Invalid Input. End a sentence with either '.', '?' or '!' only");
        }
        else
        {
            StringTokenizer str = new StringTokenizer(s," .?!");
            int x = str.countTokens();
            int c = 0;
            String w = "", a = "", b = "";
 
            for(int i=1; i<=x; i++)
            {
                w = str.nextToken(); 
 
                if(ob.isVowel(w))
                {
                    c++; 
                    a = a + w + " "; 
                }
                else
                    b = b + w + " "; 
            }
            System.out.println("OUTPUT : \nNUMBER OF WORDS BEGINNING AND ENDING WITH A VOWEL = " + c);
            System.out.println(a+b);
 
        }
    }
}
