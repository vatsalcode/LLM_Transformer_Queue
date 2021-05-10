import java.util.Scanner;
class OctalToHexa
{
    public static void main(String arg[])
    {
        int oct, dec=0, i=0, t;
        Scanner sc = new Scanner(System.in);		
        System.out.println("Enter Octl Number : ");
        oct = sc.nextInt();				
        while(oct != 0)
        {
            dec =dec + (oct%10) *(int)Math.pow(8, i);
            i++;
            oct = oct/10;
        }		     
        String hex=hexdecimal(dec); 
        System.out.println("Hexdecimal number is :"+hex);   
    }
  static String hexdecimal(int q)
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
