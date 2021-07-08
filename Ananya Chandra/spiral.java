import java.util.*;
class spiral
{
public static void main()
{
Scanner sc=new Scanner(System.in);
System.out.print(" enter the value of n:");
int n=sc.nextInt();
int arr[][]=new int[n][n];

int co=0,ro=0,c=(n-1),r=(n-1),i;
int p=n*n;
while (p>=1)
{
for(i=co;i<=c;i++)
{
arr[ro][i]=p--;
}

for(i=ro+1;i<=r;i++)
{
arr[i][c]=p--;
}

for(i=c-1;i>=co;i--)
{
arr[r][i]=p--;
}

for(i=r-1;i>ro;i--)
{
arr[i][co]=p--;
}
ro++;
co++;
r--;
c--;
}
System.out.println(" spiral matrix is:");
for (i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
System.out.print(arr[i][j]+"\t");
}
System.out.println();
}
}
}
