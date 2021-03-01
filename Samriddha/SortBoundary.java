import java.util.*;
class import java.util.*;
class SortBoundary
{
    int A[][], B[], m, n; 
    static int sum=0;
 
    void input() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the square matrix : ");
        m=sc.nextInt();
        if(m<4 || m>10)
        {
            System.out.println("Invalid Range");
            System.exit(0);
        }
        else
        {
            A = new int[m][m];
            n = m*m;
            B = new int[n]; 
 
            System.out.println("Enter the elements of the Matrix : ");
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<m;j++)
                {
                    System.out.print("Enter a value : ");
                    A[i][j]=sc.nextInt();
                }
            }
        }
    }
 
    /* The below function is used to store Boundary elements 
     * from array A[][] to array B[] 
     */
    void convert()
    {
        int x=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || j == 0 || i == m-1 || j == m-1) 
                {
                    B[x] = A[i][j];
                    x++;
                    sum = sum + A[i][j]; // Finding sum of boundary elements
                }
            }
        }
    }
 
    void sortArray() //Function for sorting Boundary elements stored in array B[]
    {
        int c = 0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(B[i]<B[j]) 
                {
                    c = B[i];
                    B[i] = B[j];
                    B[j] = c;
                }
            }
        }
    }
     
    
    void fillSpiral()
    {
        int R1=0, R2=m-1, C1=0, C2=m-1, x=0;
 
        for(int i=C1;i<=C2;i++) 
        {
            A[R1][i]=B[x++];
        }
        for(int i =R1+1;i<=R2;i++)
        {
            A[i][C2]=B[x++];
        }
        for(int i =C2-1;i>=C1;i--)         {
            A[R2][i]=B[x++];
        }
        for(int i =R2-1;i>=R1+1;i--) 
        {
            A[i][C1]=B[x++];
        }
    }
 
    void printArray() 
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                System.out.print(A[i][j]+"\t");
            }
            System.out.println();
        }
    }
 
    public static void main(String args[])
    {
        SortBoundary ob = new SortBoundary();
        ob.input();
        System.out.println("*********************");
        System.out.println("The original matrix:");
        System.out.println("*********************");
        ob.printArray(); 
        ob.convert(); 
        ob.sortArray(); 
        ob.fillSpiral(); 
 
        System.out.println("*********************");
        System.out.println("The Rearranged matrix:");
        System.out.println("*********************");
        ob.printArray(); 
        System.out.println("*********************");
        System.out.println("The sum of boundary elements is = "+sum); 
    }
}
{
    int A[][], B[], m, n; 
    static int sum=0;
 
    void input() 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the square matrix : ");
        m=sc.nextInt();
        if(m<4 || m>10)
        {
            System.out.println("Invalid Range");
            System.exit(0);
        }
        else
        {
            A = new int[m][m];
            n = m*m;
            B = new int[n]; 
 
            System.out.println("Enter the elements of the Matrix : ");
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<m;j++)
                {
                    System.out.print("Enter a value : ");
                    A[i][j]=sc.nextInt();
                }
            }
        }
    }
 
    /* The below function is used to store Boundary elements 
     * from array A[][] to array B[] 
     */
    void convert()
    {
        int x=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || j == 0 || i == m-1 || j == m-1) 
                {
                    B[x] = A[i][j];
                    x++;
                    sum = sum + A[i][j]; // Finding sum of boundary elements
                }
            }
        }
    }
 
    void sortArray() //Function for sorting Boundary elements stored in array B[]
    {
        int c = 0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(B[i]<B[j]) 
                {
                    c = B[i];
                    B[i] = B[j];
                    B[j] = c;
                }
            }
        }
    }
     
    
    void fillSpiral()
    {
        int R1=0, R2=m-1, C1=0, C2=m-1, x=0;
 
        for(int i=C1;i<=C2;i++) 
        {
            A[R1][i]=B[x++];
        }
        for(int i =R1+1;i<=R2;i++)
        {
            A[i][C2]=B[x++];
        }
        for(int i =C2-1;i>=C1;i--)         {
            A[R2][i]=B[x++];
        }
        for(int i =R2-1;i>=R1+1;i--) 
        {
            A[i][C1]=B[x++];
        }
    }
 
    void printArray() 
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                System.out.print(A[i][j]+"\t");
            }
            System.out.println();
        }
    }
 
    public static void main(String args[])
    {
        SortBoundary ob = new SortBoundary();
        ob.input();
        System.out.println("*********************");
        System.out.println("The original matrix:");
        System.out.println("*********************");
        ob.printArray(); 
        ob.convert(); 
        ob.sortArray(); 
        ob.fillSpiral(); 
 
        System.out.println("*********************");
        System.out.println("The Rearranged matrix:");
        System.out.println("*********************");
        ob.printArray(); 
        System.out.println("*********************");
        System.out.println("The sum of boundary elements is = "+sum); 
    }
}
