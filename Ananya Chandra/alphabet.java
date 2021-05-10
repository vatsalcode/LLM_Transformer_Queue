//arrage alphabets of a sentence in alphabetical order
import java.io.*;
class Alphabet
{
    String str;
    int l;
    
    public void readword() throws IOException
    {
        System.out.println("enter the string");
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        str = br.readLine();
        l = str.length();
        int i,j;
         char c[] = new char[l]; 
        char temp;
        for(i=0;i<l;i++)
        {
            c[i]= str.charAt(i);
        }
        
        for(i=0;i<l-1;i++)
        {
            for(j=0;j<l-1-i;j++)
            {
                if(c[j] > c[j+1])
                {
                    temp = c[j];
                    c[j] = c[j+1];
                    c[j+1] = temp;
                }
            }
        }

        for( i=0;i<l;i++)
        {
            System.out.print(c[i]);
        }
    }
}
