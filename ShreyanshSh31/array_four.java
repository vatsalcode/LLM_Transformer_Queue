import java.util.*;
public class array_four
{
    static Scanner sc = new Scanner(System.in);
    public static void main(String args[])
    {
        System.out.print("Enter the length of the array : ");
        int l = sc.nextInt();
        int no[]=new int[l];
        System.out.println("Enter the elements of array ");
        for(int i=0;i<l;i++)
        {
            System.out.print("Enter the element index "+(i+1)+" ");
            no[i]=sc.nextInt();
        }
        for(int i = 0;i<l-1;i++)
        {
            int m = i;
            for(int j=i+1;j<l;j++)
            {
                if(no[j]<no[m])
                    m=j;
            
                }
            int temp = no[m];
            no[m]=no[i];
            no[i]=temp;
        
        }
        int sum1=0;
        for(int i=0;i<l;i+=2)
            sum1+=no[i];
        System.out.print(sum1);
    }
}
