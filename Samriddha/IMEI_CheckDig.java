import java.io.*;
class IMEI_CheckDig
{
    int sumDig(int n) 
    {
        int a = 0;
        while(n>0)
        {
            a = a + n%10;
            n = n/10;
        }
        return a;
    }
     
    public static void main(String args[])throws IOException
    {
        IMEI_CheckDig ob = new IMEI_CheckDig();
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         
        System.out.print("Enter first 14 digits of IMEI code : ");
        long n = Long.parseLong(br.readLine());          
        String s = Long.toString(n); 
        int l = s.length();
         
        if(l!=14) 
            System.out.println("Output : Invalid Input");
        else
        {
            int d = 0, sum = 0;
            for(int i=14; i>=1; i--)
            {
                d = (int)(n%10);
                 
                if(i%2 == 0)
                {
                    d = 2*d; 
                }
 
                sum = sum + ob.sumDig(d); 
                 
                n = n/10;
            }
            System.out.println("Sum = "+sum);
 
            int dig = (9*sum)%10; 
            System.out.println("Output : The check digit = "+dig);
             
        }
    }
}
