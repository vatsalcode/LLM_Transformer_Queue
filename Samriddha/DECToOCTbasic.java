import java.util.Scanner;
class DECToOCT
{
     static int i=1;
    public static void main(String args[])
    {
        int dec, rem,i=0;
        Scanner sc = new Scanner(System.in);   
        System.out.println("Enter a Dec number: ");
        dec=sc.nextInt();
        System.out.println("Oct number is : ");
        int a[] = new int[50];
        while(dec!= 0)
        {
            a[i++] = dec%8;
            dec= dec/8;
        }       
        for(int c=i-1;c>=0;c--)
        {
	 System.out.print(a[c]);
        }
   
    }
}
