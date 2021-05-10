import java.util.Scanner;
class Reverse
{
      int rev[],j=0;
      Reverse(int[] a,int n )
      {	
	rev=new int[n];
	for(int i=n;i>0 ;i--,j++ )
	{
            		rev[j] = a[i-1];
               }
       }
}
class REV
{
    public static void main(String[] args) 
    {
        int n,i,j=0;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter number of elements in the array:");
        n = s.nextInt();
        int array[] = new int[n];
        int rev[] = new int[n];
        System.out.println("Enter "+n+" elements ");
        for( i=0; i < n; i++)
        {
            array[i] = s.nextInt();
        }
        Reverse res=new Reverse(array,n);
        System.out.println("Reverse of an array is :");
        for( i=0; i < n; i++)
        {
        	System.out.println(res.rev[i]);
       }
    }
}
