import java.util.*;
class count_vowel_cons
{
    int countVowel(String s) 
    {
        s = s.toUpperCase();
        int count = 0;
        char ch;
        for(int i=0; i<s.length(); i++)
        {
            ch = s.charAt(i);
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                count++;
            }
        }
        return count;
    }
       
    String convert(String s)
    {
        char ch = s.charAt(0); 
        ch = Character.toUpperCase(ch);
        String f = ch + s.substring(1); 
        return f;
    }
      
    String addSpace(String s, int max)
    {
        int x = max-s.length();
        for(int i=1; i<=x; i++)
        {
            s = s+" ";
        }
        return s;
    }
       
    public static void main(String args[])
    {
        count_vowel_cons ob = new count_vowel_cons();
        Scanner sc=new Scanner(System.in);
           
        System.out.print("Enter a sentence : ");
        String s=sc.nextLine();
        int l = s.length();
        char last = s.charAt(l-1); 
            
        if(last != '.' && last != '?')
        {
            System.out.println("Invalid Input. End a sentence with either '.' or '?'");
        }
        else
        {
            StringTokenizer str = new StringTokenizer(s," .?");
            int x = str.countTokens();
            String ans="";
            String word[]=new String[x];
            int vow, con, max=0;
               
            for(int i=0; i<x; i++)
            {
                word[i] = str.nextToken(); 
                ans = ans + " " + ob.convert(word[i]);
                if(word[i].length()>max)
                {
                    max = word[i].length();
                }
            }
            System.out.println("Sentence = "+ans.trim());
              
            String y=ob.addSpace("Word",max);
            System.out.println(y+"\tVowels\tConsonant");
            for(int i=0; i<x; i++)
            {
                vow = ob.countVowel(word[i]);
                con = word[i].length()-vow; 
                y = ob.addSpace(word[i],max);
                System.out.println(y+"\t"+vow+"\t"+con);
            }
        }
    }
}
