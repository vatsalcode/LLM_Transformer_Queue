//to print the greatest common divisor of two numbers
import java.io.*;
class gcd
{
    public static void main() throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("enter the  numbers =");
        int p = Integer.parseInt(br.readLine());
        int q = Integer.parseInt(br.readLine());
        gcd obj = new gcd();
        int g = obj.calc(p,q);
        System.out.println("GCD ="+g);
    }
    
    public int calc(int p,int q)
    {
        if(q==0)
            return p;
        
        else
            return calc(q,p%q);
     }
}

