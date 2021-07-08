import java.util.Scanner;
class DECToOCT
{
       static int oct[] = new int[50],i=1;
       int[]  octal(int q)
       {
         if(q != 0)
         {
            oct[i++] = q%8;
            q= q/8;
            octal(q);
         }
         return oct;
       }
         
    public static void main(String args[])
    {
        DECToOCT d=new DECToOCT();
        int dec, rem, q;
        Scanner sc = new Scanner(System.in);   
        System.out.println("Enter a Dec number: ");
        dec=sc.nextInt();
        System.out.println("Oct number is : ");
        int[] oct=d.octal(dec);    	
       for(int c=i-1;c>0;c--)
         {
	 System.out.print(oct[c]);
         }
     }    
}
