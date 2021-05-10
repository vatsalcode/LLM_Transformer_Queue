import java.util.*;
class pascal
    {
    public   void pascalw()	
    {
        Scanner sc= new Scanner(System.in);
          System.out.println(" enter the limit");
	int n = sc.nextInt();
          int  pas[] = new int [n+1];
	pas[0] = 1;
	for (int i=0; i<n; i++)	
	{
	for (int j=0; j<=i; ++j)
		System.out.print(pas[j]+" ");
	
	System.out.println( );
	
	for (int j=i+1; j>0; j--)
		pas[j]=pas[j]+pas[j-1];
	}
	}	
	}
