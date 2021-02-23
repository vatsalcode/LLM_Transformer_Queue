import java.io.*;
class IMEI_validation
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
        IMEI_validation ob = new IMEI_validation();
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         
        System.out.print("Enter a 15 digit IMEI code : ");
        long n = Long.parseLong(br.readLine());
         
        String s = Long.toString(n); 
        int l = s.length();
         
        if(l!=15)
            System.out.println("Output : Invalid Input");
        else
        {
            int d = 0, sum = 0;
            for(int i=15; i>=1; i--)
            {
                d = (int)(n%10);
                 
                if(i%2 == 0)
                {
                    d = 2*d; 
                }
 
                sum = sum + ob.sumDig(d); 
                 
                n = n/10;
            }
             
            System.out.println("Output : Sum = "+sum);
             
            if(sum%10==0)
                System.out.println("Valid IMEI Code");
            else
                System.out.println("Invalid IMEI Code");
        }
    }
}
