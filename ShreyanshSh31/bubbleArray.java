import java.util.*;
class bubbleArray
{
    int arr[];
    int size;
    static Scanner sc = new Scanner (System.in);
    bubbleArray(int x)
    {
        size=x;
        arr = new int [size];
    }

    void readArr()
    {
        System.out.println("Enter the elements for the array");
        for(int i=0;i<size;i++)
            arr[i]= sc.nextInt();
    }

    void display()
    {
        System.out.println("Original array");

        for (int i=0;i<=size-1;i++)
            System.out.println(arr[i]);
    }

    void sortPrime()
    {
        for(int i=0;i<size-1;i++)
        {
            for(int j=0;j<size-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        System.out.println("Sorted prime");
        int c=0;
        for(int i=0;i<size;i++)
        {
            int x=arr[i];
            c=0;
            for(int j=2;j<=x/2;j++)
            {
                if(x%j==0)
                    c++;
            }
            if(c==0)
                System.out.println(arr[i]);
        }
    }

    public static void main()
    {
        System.out.println("Enter the size of the array");
        int l=sc.nextInt();
        bubbleArray obj=new bubbleArray(l);
        obj.readArr();
        System.out.println("Unsortted array");
        obj.display();
        obj.sortPrime();
    }
}

