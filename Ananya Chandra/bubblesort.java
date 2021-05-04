import java.io.*;

class bubble_sort
{
     public void input() throws IOException
    {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        int i;
        System.out.println("enter the number of elements");
        int n=Integer.parseInt(br.readLine());
        int a[] = new int[n];
        System.out.println("enter elements");
        for(i=0;i<n;i++)
        {
            a[i] = Integer.parseInt(br.readLine());
        } 
        int j,temp;
        
        for(i=0 ; i<n-1 ; i++)
        {
            for(j=0 ; j<n-1-i ; j++)
            {
                if(a[j] > a[j+1])
                {
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
                }
            }
    }
        for(i=0;i<n;i++)
        {
            System.out.println(a[i]+" ");
            
        }
    }
}
