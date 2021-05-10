import java.util.*;
class sumofarray_one
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the size of array");
        int n;
        n=sc.nextInt();
        int arr[]=new int[n];
        int sum=0;

        int i;
        System.out.println("Enter the elements of the array");
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            sum=sum+arr[i];
        }
        for(int j=0;j<n;j++)
        {
            for(int k=j+2;k<n;k=k+2)
            {
                for(int l=j;l<=k;l++)
                {
                    sum= sum+arr[l];
                }
            }

        }
        System.out.println(sum);
    }
}
