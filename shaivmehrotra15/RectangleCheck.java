import java.io.*;
import java.util.*;
class RectangleCheck
{
    public static void main(String[]args)throws IOException
    {
        try
        {
        Scanner r=new Scanner(System.in);
        int n=0;
        
        boolean flag=false;
        System.out.println("enter number");
        n=r.nextInt();
        for(int i=0;i<n;i++)
        {
            int a[]= new int[4];
            System.out.println("enter sides");
            a[0]=r.nextInt();
            a[1]=r.nextInt();
            a[2]=r.nextInt();
            a[3]=r.nextInt();
            for(int j=1;j<=3;j++)
            {
                if(a[0]==a[j])
                {
                    if(j==1)
                    { if (a[2]==a[3]) flag= true;
                    }
                    else if (j==2)
                    { if (a[1]==a[3]) flag= true;
                    }
                    else  
                    { if (a[1]==a[2]) flag =true;
                    }
                }
            }
            if (flag==true) System.out.println("yes");
            else System.out.println("no");
            flag=false;
            a=null;
        }
    }catch(Exception e){
        return;
    }
    }
}
