import java.util.*;
class selection
{
    int a[];
    int size;
    static Scanner sc=new Scanner(System.in);
    selection(int m)
    {
        size=m;
        a=new int [size];
    }
    void input()
    {
        System.out.println("Enter values for arry");
        for(int i=0;i<size;i++)
        {
            a[i]=sc.nextInt();
        }
    }
    void sort()
    {
        for(int i=1;i<size;i++)
        {
            int minval=a[i];
            int j=i-1;
            while((j>=0)&&(a[j]>minval))
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=minval;
        }
}
void print ()
{
System.out.println("Sorted array:");
for(int i=0;i<size;i++)
{
System.out.println(a[i]); 
}
}
public static void main(String X[])
{
    System .out.println("Enter size");
    int s=sc.nextInt();
    selection obj=new selection (s);
    obj.input();
    
    obj.sort();
    obj.print();
}
}
