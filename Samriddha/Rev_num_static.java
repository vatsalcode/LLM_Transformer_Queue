import java.util.Scanner;
class Rev
{
	public static void main(String[] arg)
	{
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a number");
	int x=sc.nextInt();
	int r=reverse(x);
	System.out.println("Reverse of a number is = "+r);
	}
static int reverse(int num)
{
	int rem,res=0;
	while(num!=0)
	{
	rem=num%10;
	res=(res*10)+rem;
	num=num/10;
	}
	return res;
}
}
