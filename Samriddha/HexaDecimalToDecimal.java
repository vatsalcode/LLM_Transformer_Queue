import java.util.Scanner;
 class HexaDecimalToDecimal
{
    public static void main(String args[])
    {
        String hexdec ;
        String hex= "0123456789ABCDEF";
        Scanner sc = new Scanner(System.in);		
        System.out.print("Enter Hexadecimal Number : ");
        hexdec = sc.nextLine();		
        hexdec = hexdec.toUpperCase();
        int decimal = 0;
        for (int i = 0; i < hexdec.length(); i++)
        {
                 char ch = hexdec.charAt(i);
                 int  in= hex.indexOf(ch);
                 decimal = 16*decimal + in;
        }
        System.out.print("Decimal Number is " + decimal);
    }    
}
