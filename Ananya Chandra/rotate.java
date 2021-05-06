// to rotate a matrix by 90 degree 
import java.io.*;
class rotate
{
    void mat()throws IOException
    {
     InputStreamReader input = new InputStreamReader(System.in);
     BufferedReader br= new BufferedReader(input);
     System.out.println(" enter the limit");
     int m=Integer.parseInt(br.readLine());
     if ( m<=2||m>=10)
     { 
     System.out.println(" invalid input");
     }
     else
     {
         int a[][]= new int[m][m];
         System.out.println(" enter the elements");
         for(int i=0;i<m;i++)
         {
          for(int j=0;j<m;j++)
          {
              a[i][j]=Integer.parseInt(br.readLine());
            }
        }
        System.out.println(" the original matrix:");
         for(int i=0;i<m;i++)
         {
          for(int j=0;j<m;j++)
          {
             System.out.print(a[i][j]);
            }
            System.out.println();
        }
        int t[][]=new int[m][m];
        int n= m-1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                t[j][n]=a[i][j];
            }
            n--;
        }
        System.out.println(" the rotated matrix:");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                System.out.print(t[i][j]);
            }
            System.out.println();
        }
    }
}
}

                
        
           
         
             
    
