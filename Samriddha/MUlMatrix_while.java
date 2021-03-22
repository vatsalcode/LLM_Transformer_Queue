import java.util.Scanner;
 
class MUlMatrix
{
   public static void main(String args[])
   {
      int r1, r2,c1,c2,i,j,k,sum;
      Scanner in = new Scanner(System.in);
 
      System.out.println("Enter the number of rows of matrix1");
      r1 = in.nextInt();
     
      System.out.println("Enter the number  columns of matrix 1");
      c1  = in.nextInt();
     System.out.println("Enter the number of rows of matrix2");
      r2 = in.nextInt();
     
      System.out.println("Enter the number  of columns of matrix 2");
      c2 = in.nextInt();
  
      if(c1==r2)
     {
 
        int mat1[][] = new int[r1][c1]; 
        int mat2[][] = new int[r2][c2]; 
 	 int res[][] = new int[r1][c2];
 
       System.out.println("Enter the elements of matrix1");
 
       i= 0 ;
    while( i < r1 )
        {   
    
             j= 0 ;
                while( j < c1)
             
	{
                  mat1[i][j] = in.nextInt();
	  j++ ;             
	}
                   i++; 
       }
      System.out.println("Enter the elements of matrix2");
 
             i= 0 ;
    while( i < r2 )
        {   
    
             j= 0 ;
                while( j < c2)
             
	{
                  mat2[i][j] = in.nextInt();
	  j++ ;             
	}
                   i++; 
       }
      
      System.out.println("\n\nOriginal   matrix:-");
          i= 0 ;
	while( i < r1 )
         {
        
                 j= 0 ;
	while( j <c2)
          	   {
 		sum=0;
                       k= 0 ; 
		while(k <r2)
  		{
                                       sum +=mat1[i][k]*mat2[k][j]   ;
		  k++ ;
                             }
                         res[i][j]=sum;
                       j++;
                }
i++;
      }
        i= 0 ;
	while( i < r1 )
       {
              j=0 ;
	while( j < c2 )
                {
                System.out.print(res[i][j]+" ");
 	j++;
	}	
          System.out.println();
        i++ ; 
       }
     }
else
System.out.print("multipication does not exist ");
   }
}
