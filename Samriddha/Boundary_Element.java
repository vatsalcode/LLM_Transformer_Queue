import java.util.*;
class Boundary_Element
{
    public static void main(String args[])
    {
        int i,j,r1,c1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of  rows: ");         
        r1 = sc.nextInt();
        System.out.print("Enter the no. of columns: "); 
        c1 = sc.nextInt();
        int A[][]=new int[r1][c1];
         
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                System.out.print("Enter the elements: ");
                A[i][j] = sc.nextInt();
            }
        }
         
        System.out.println("The Boundary Elements are:");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if(i==0 || j==0 || i == r1-1 || j == c1-1) 
                    System.out.print(A[i][j]+"\t");
                else
                    System.out.print(" \t");
            }
            System.out.println();
        }
    }
}
