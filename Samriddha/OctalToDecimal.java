import java.util.Scanner;
class OctalToDecimal
{
    public static void main(String arg[])
    {
        int oct, dec=0, i=0, t;
        Scanner sc = new Scanner(System.in);		
        System.out.println("Enter Oct Number : ");
        oct = sc.nextInt();				
        while(oct != 0)
        {
            dec =dec + (oct%10) *(int)Math.pow(8, i);
            i++;
            oct = oct/10;
        }		
        System.out.println("Deci Number is : "+dec);
       }
}
