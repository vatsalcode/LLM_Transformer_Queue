import java.util.*;
class candies
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        {
            System.out.println("Enter the size of array");
            int num = sc.nextInt();
            int a;
            int arr[]=new int [num];
            System.out.println("Enter the value for array");
            for(int i=0;i<num;i++)
            {
                arr[i]=sc.nextInt();
            }
            System.out.println("Enter the number of the extra candies :-)");
            int extra=sc.nextInt();
            int lar=0;
            for(int j =0;j<num;j++)
            {
                if(arr[j]>lar)
                    lar = arr[j];
            }
            Boolean [] g = new Boolean[num];
            for(int k=0;k<num;k++)
            {
                if((arr[k]+extra)>=lar)
                    g[k]=true;
                else
                    g[k]=false;
            }
            for(int l =0;l<num;l++)
            {
                System.out.println(g[l]);
            }
        }
    }
}
