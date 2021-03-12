import java.util.Scanner;
class DecimalToHexa
{
     static int i=1;
    public static void main(String args[])
    {  
        int decimal, rem, q,j=1;
        Scanner sc = new Scanner(System.in);   
        System.out.println("Enter a Decimal number: ");
        decimal=sc.nextInt();
        System.out.println("Hexadecimal number is : ");
        String hex=hexadecimal(decimal); 
        System.out.print(hex);   
    }
static String hexadecimal(int q)
{
char a[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int rem;
String hexdec="";
        while(q != 0)
        {
	rem=q%16;
	hexdec= a[rem] + hexdec;
               q= q/16;
        }
        return hexdec;
 }
}
