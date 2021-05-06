import java.util.*;
class sortParagraph
{
    
    int countWords(String s)
    {
        StringTokenizer str = new StringTokenizer(s," .,?!");
        int c = str.countTokens();
        return c;
    } 
     
   
    void sort(String w[], int p[]) 
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
     
    void printResult(String w[], int p[]) 
    {
        int n = w.length;
        for(int i=0; i<n; i++)
        {
            System.out.println(w[i]+"\t=\t"+p[i]);
        }
    }
     
    public static void main(String args[])
    {
        sortParagraph ob = new sortParagraph();
        Scanner sc = new Scanner(System.in);
         
        System.out.print("Enter a paragraph : "); 
        String pg = sc.nextLine();
         
        StringTokenizer str = new StringTokenizer(pg,".?!");
        int count = str.countTokens(); 
        if(count > 10)
            System.out.println("A maximum of 10 sentences are allowed in the paragraph");
        else
        {
            String sent[] = new String[count];
            int p[] = new int[count]; 
             
            for(int i=0; i<count; i++)
            {
                sent[i] = str.nextToken().trim(); 
                p[i] = ob.countWords(sent[i]); 
            }
            ob.sort(sent,p);
        }
    }
}
