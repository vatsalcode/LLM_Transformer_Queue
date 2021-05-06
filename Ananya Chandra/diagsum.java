//to find the sum of diagonal of array
import java.io.*;
class diagsum
{
public static void main()throws IOException
{
int a[][]=new int[4][4];
BufferedReader aa=new BufferedReader(new InputStreamReader(System.in));
int x,y,z,Sum=0;
System.out.println("Enter the array");
for(x=0;x<4;x++)
{
for(y=0;y<4;y++)
{
z=Integer.parseInt(aa.readLine());
a[x][y]=z;
}
}
System.out.println("Array -");
for(x=0;x<4;x++)
{
for(y=0;y<4;y++)
{
System.out.print(a[x][y]+" ");
}
System.out.print("\n");
}
y=0;
for(x=0;x<4;x++)//loop for finding sum of diagonal
{
Sum=Sum+a[x][y];
y=y+1;
}
System.out.println("Sum of diagonal is " +Sum);
Sum=0;
}
}
