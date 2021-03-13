import java.util.Scanner;
class HexaDecimalToOctal
{
    public static void main(String args[])
    {
        String hexdec;
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
        System.out.println("Decimal Number is : " + decimal);
        System.out.print("Octal number is : ");
        int i=0;
        int a[] = new int[50];
        while(decimal != 0)
        {
            a[i++] = decimal%8;
            decimal= decimal/8;
        }       
        for(int c=i-1;c>=0;c--)
        {
	 System.out.print(a[c]);
        }     
    }    
}
