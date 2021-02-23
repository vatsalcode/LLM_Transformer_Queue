import java.util.*;
class Fill_Prime
{
     
    boolean isPrime(int n) 
    {
        int c = 0;
        for(int i = 1; i<=n; i++)
        {
            if(n%i == 0)
                c++;
        }
        if(c == 2)
            return true;
        else
            return false;
    }
     
   public static void main(String args[])
   {
       Fill_Prime ob = new Fill_Prime();
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter the number of rows: ");
       int r1 = sc.nextInt();
       System.out.print("Enter the number of columns: ");
       int c1 = sc.nextInt();
        
       int A[][]=new int[r1][c1]; 
       int B[] = new int [r1*c1]; 
        
       int i = 0, j;
       int k = 1;
      
       while(i < r1*c1)
       {
           if(ob.isPrime(k)==true)
           {
                   B[i] = k;
                   i++;
           }
           k++;
       }
        
       int x = 0;
       for(i=0;i<r1;i++)
        {
           for(j=0;j<c1;j++)
           {
               A[i][j] = B[x];
               x++;
           }
        }
             
       System.out.println("The Filled Array is :");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                {
                    System.out.print(A[i][j]+"\t");
                }
            System.out.println();
        }
   }
}
