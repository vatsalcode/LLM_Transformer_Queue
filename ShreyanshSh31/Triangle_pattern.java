import java.util.Scanner;
class pattern_five
{
    public static void main(String args[])
    {
        int c, d, num = 1 ;
        for(c = 1;c<= 4;c++)
        {
            for(d = 1;d<= c;d++)
            {
                System.out.print(num + " " );
                num++ ;
            }
            System.out.println( ) ;
        }
    }
}

