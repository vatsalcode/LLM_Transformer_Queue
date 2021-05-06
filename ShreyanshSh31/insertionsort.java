import java.util.*;
class insertionsort
{
    int a[];
    int n;
    insertionsort()
    {
    }

    void readarray()
    {
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter the size of the array");
        n= sc.nextInt();
        a=new int [n];
        System.out.println("Enter the elements of the array");
        for (int i=0;i<n;i++)
            a[i]=sc.nextInt();
    }

    void sort()
    {
        for(int i=1;i<n;i++)
        {
            int temp = a[i];
            int j=i=1;
            while ((j>=0) && (a[j]> temp))
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=temp;
        }
    }

    void print ()
    {
        for (int i=0;i<n;i++)
        {
            System.out.println(a[i]);
        }
    }

    public static void main(String args[])
    {
        insertionsort obj= new insertionsort();
        obj.readarray();
        System.out.println("Original Array");
        obj.print();
        obj.sort();
        System.out.println("Sorted Array");
        obj.print();
    }
}
