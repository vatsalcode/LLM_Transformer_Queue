import java.util.Scanner;
 
class AddMatrix
{
public static void main(String args[])
{
int row, col,i,j;
Scanner in = new Scanner(System.in);
 
System.out.println("Enter the number of rows");
row = in.nextInt();
 
System.out.println("Enter the number columns");
col = in.nextInt();
 
int mat1[][] = new int[row][col];
int mat2[][] = new int[row][col];
int res[][] = new int[row][col];
 
System.out.println("Enter the elements of matrix1");
i=0;
while ( i < row)
{ 
j=0;
while(j < col)
{
mat1[i][j] = in.nextInt();
j++;
}
i++;
 
}
System.out.println("Enter the elements of matrix2");
 
i=0;
while ( i < row)
{ 
j=0;
while(j < col)
{
mat2[i][j] = in.nextInt();
j++;
}
i++;
 
}
 
i=0;
while ( i < row)
{ 
j=0;
while(j < col)
{
 
res[i][j] = mat1[i][j] + mat2[i][j] ; 
j++;
}
i++;
 
}
 
System.out.println("Sum of matrices:-");
i=0;
while ( i < row)
{ 
j=0;
while(j < col)
{
 
System.out.print(res[i][j]+"\t");
j++;
}
System.out.println();
i++;
 
}
 
}
}
