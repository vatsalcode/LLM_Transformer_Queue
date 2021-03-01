import java.util.*;
class WordPotential
{
    int findPotential(String s) 
    {
        s = s.toUpperCase();
        int p = 0, l = s.length();
        char ch;
        for(int i=0; i<l; i++)
        {
            ch = s.charAt(i);
            p = p + (ch-64); 
        }
        return p;
    }
    
    void sortPotential(String w[], int p[]) 
    {
        int n = w.length, t1 = 0;
        String t2 = "";
         
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(p[i]>p[j])
                {
                    t1 = p[i];
                    p[i] = p[j];
                    p[j] = t1;
                    t2 = w[i];
                    w[i] = w[j];
                    w[j] = t2;
                }
            }
        }
         
        printResult(w,p);    
    }
     
    void printResult(String w[], int p[])     {
        int n = w.length;
        String ans = "";
        for(int i=0; i<n; i++)
        {
            ans = ans + " " + w[i];
        }
        ans = ans.trim();
        System.out.println("\nOutput\t\t :  \t"+ans);
    }
     
    public static void main(String args[])
    {
        WordPotential ob = new WordPotential();
        Scanner sc = new Scanner(System.in);
         
        System.out.print("Enter a sentence : \t");
        String s = sc.nextLine();
         
        StringTokenizer str = new StringTokenizer(s," .,?!");
        int n = str.countTokens();
         
        String words[] = new String[n];
        int potential[] = new int[n];
         
        for(int i=0; i<n; i++)
        {
            words[i] = str.nextToken(); 
            potential[i] = ob.findPotential(words[i]); 
        }
         
        System.out.print("\nPotential\t : \t");
        for(int i=0; i<n; i++)
        {
            System.out.println(words[i]+"\t= "+potential[i]);
            System.out.print("\t\t\t");
        }
         
        ob.sortPotential(words,potential);
    }
}
