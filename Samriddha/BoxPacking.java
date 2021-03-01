import java.util.*;
class BoxPacking
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
         
        System.out.print("Enter number of boxes to be packed : ");
        int N = sc.nextInt();
        if(N<1 || N > 1000)
        {
            System.out.println("INVALID INPUT");
        }
        else
        {
            int cart[] = {48, 24, 12, 6};
            int copy = N;
            int totalCart = 0,count = 0;
            System.out.println("OUTPUT :");
            for(int i=0; i<4; i++)
            {
                count = N / cart[i];
                if(count!=0)
                {
                    System.out.println("\t"+cart[i]+"\tx\t"+count+"\t= "+cart[i]*count);
                }
                totalCart = totalCart + count;
                N = N % cart[i];
            }
            if(N>0)
            {
                System.out.println("\tRemaining Boxes   "+N+" x 1 = "+N);
                totalCart = totalCart + 1;
            }
            else
            {
                System.out.println("\tRemaining Boxes\t\t= 0");
            }
            System.out.println("\tTotal number of boxes   = "+copy);
            System.out.println("\tTotal number of cartons = "+totalCart);
        }
    }
}
