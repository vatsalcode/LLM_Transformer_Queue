import java.io.*;
class SumDigit
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader reader = new BufferedReader (new InputStreamReader(System.in));
        String x= reader.readLine();
        int num = Integer.parseInt(x);
        int q=1, s=0;
        for(;q!=0;)
        {
            int r=num%10;
            q=num/10;
            num =q;
            s=s+r;
        }
        System.out.print(s);
    }
}
