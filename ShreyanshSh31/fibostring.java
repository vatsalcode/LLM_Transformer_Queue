import java.util.*;
class fibostring
{
    String x,y,z;
    int n;
    public fibostring()
    {
        x="a";
        y="b";
        z="ba";
    }
    void accept()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no of terms");
        n=sc.nextInt();
    }
    void generate()
    {
        int i;
        System.out.print(x+" "+y+" ");
        for(i=3;i<=n;i++)
        {
            z=y+x;
            x=y;
            y=z;
            System.out.print(z+" ");
        }
    }
    public static void main(String Args[])
    {
        fibostring ob=new fibostring ();
        ob.accept();
        ob.generate();
    }
}
        
