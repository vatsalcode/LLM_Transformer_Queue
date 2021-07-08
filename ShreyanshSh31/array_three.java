import java.util.*;
class array_three
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int sum=0;
        System.out.println("Enter the length of array");
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter teh required value");
            arr[i]=sc.nextInt();
        }
        boolean flag;
        for(int j=0;j<n;j++)
        {
            flag=true;
            for(int k=0;k<n;k++)
            {
                if(j==k)
                {
                    continue;
                }
                if(arr[j]==arr[k])
                {
                    flag=false;
                }
            }
            if(flag==true)
            {
                sum=sum+arr[j];
            }
        }
        System.out.println(sum);
    } 
}
