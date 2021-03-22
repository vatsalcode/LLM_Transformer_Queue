import java.util.Scanner;
 
class TRANSMatrix
{
   public static void main(String args[])
   {
      int row, col,i,j,temp,n;
      Scanner in = new Scanner(System.in);
 
      System.out.println("Enter the number of rows");
      row = in.nextInt();
     
      System.out.println("Enter the number  columns");
      col  = in.nextInt();
    if(row >col)
     n=row;
    else
     n= col;
      int mat1[][] = new int[n][n]; 
 
 
      System.out.println("Enter the elements of matrix");
 
      for (  i= 0 ; i < row ; i++ )
       {   
    
            for ( j= 0 ; j < col ;j++ )
             mat1[i][j] = in.nextInt();
            
       }
      
      System.out.println("\n\nOriginal   matrix:-");
 for (  i= 0 ; i < row ; i++ )
       {  
                for ( j= 0 ; j <col;j++ )
                System.out.print(mat1[i][j]+" ");
 	
         System.out.println();
}
 
      for (  i= 0 ; i < n; i++ )
         for ( j= i+1 ; j < n;j++ )
             {
                   temp=mat1[i][j]  ;
                   mat1[i][j] =mat1[j][i]  ;
		mat1[j][i]  =temp;
 
            }
 
 
      System.out.println("Transpose  of   matrix:-");
      for (  i= 0 ; i < col ; i++ )
       {  
                for ( j= 0 ; j < row;j++ )
                System.out.print(mat1[i][j]+" ");
 	
         System.out.println();
       }
 
   }
 
}
