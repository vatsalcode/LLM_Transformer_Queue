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
       i= 0 ; 
       do
       {   
    
             j= 0 ; 
         do 
             {
             mat1[i][j] = in.nextInt();
	j++; 
            }while(j < col);
           i++;
       }while(i < row);
      
      System.out.println("\n\nOriginal   matrix:-");
  i= 0 ; 
do
       {   
    
             j= 0 ; 
          do
             {
                System.out.print(mat1[i][j]+" ");
	j++; 
            }while(j < col);
 
         System.out.println();
           i++;
       }while(i < row);
 	 i= 0 ; 
 do
       {   
    
             j= i +1; 
	
         do 
              {
                  if(j<n)
                   {temp=mat1[i][j]  ;
                   mat1[i][j] =mat1[j][i]  ;
	    mat1[j][i]  =temp;	
	    }
                   j++; 
            }while(j < n); 
           i++;
       }while(i < n);
       
     System.out.println("Transpose  of   matrix:-");
       i= 0 ;
do
       {  
               j= 0 ; 
	do
               {
                System.out.print(mat1[i][j]+"  ");
                     j++; 
 	}while(j < row);
         System.out.println(); 
              i++ ;
       }while( i< col);
       
 
   }
}
