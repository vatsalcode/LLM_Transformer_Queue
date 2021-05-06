// to sort elements using insertion sort
import java.io.*;
class sort
{
    public void fun()throws IOException
    {
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(input);
        System.out.println(" enter the limit");
        int n= Integer.parseInt(br.readLine());
        int a[]=new int[n+1];
        a[0]=-999;
        int ptr,temp,i;
        System.out.println(" enter the elements");
        for(i=1;i<=n;i++)
        {
            a[i]=Integer.parseInt(br.readLine());
        }
        for(i=1;i<=n;i++)
        {
         temp=a[i];
         ptr= i-1;
         while(a[ptr]>temp)
         {
             a[ptr+1]=a[ptr];
             ptr--;
            }
            a[ptr+1]=temp;
        }
        for( i=1;i<=n;i++)
        {
            System.out.println(a[i]);
        }
    }
    }
    
         
