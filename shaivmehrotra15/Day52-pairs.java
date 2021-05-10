import java.io.*;
import java.util.*;
class test
{
    public static void main(String[]args)throws IOException
    {
       int a[]={1,2,3,4};
       for(int i =0; i<4;i++)
       {
           for(int j=i+1 ; j<4;j++)
           {
               System.out.println(a[i] + "  " + a[j]);
            }
        }
    }
}
