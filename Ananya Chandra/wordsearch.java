//to search for a word in a sentence
import java.io.*;
public class word_search 
{
    public static void main() throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter the string=");
        String s = br.readLine();
        s=s+" ";
        int l=s.length();
        System.out.println("enter the word to be searched =");
        String look = br.readLine();
        int flag = -1;
        String word="";
     for(int i=0;i<l;i++)
           {
               char ch=s.charAt(i);
               if(ch!=' ')
               {
                   word=word+ch;
               }
               else
               {
                if(word.equals(look))
                flag++;
                 word="";
            }
            }
            
       if(flag ==-1)
       {
           System.out.println("the word not found");
        }
        else
        {
            System.out.println("the word found");
        }
    }
}
