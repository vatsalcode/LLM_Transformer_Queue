// to count the number of vowels and consonants in the entered sentence
import java.util.*;
class vowelandconsonant
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Sentence of which the vowel and consonants you want to count");
        String sen="";
        sen= sc.nextLine();
        sen=sen.toLowerCase();
        int vowel=0;
        int consonant=0;
        int len=sen.length();
        for(int i=0;i<len;i++)
        { char ch=sen.charAt(i);
            if(ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {vowel++;
            }
            else if ((ch>='a'&&ch<='z'))
            {
                consonant++;
            }
        }
        System.out.println("Number of vowels="+vowel);
        System.out.println("Number of Consonants="+consonant);
    }
}
