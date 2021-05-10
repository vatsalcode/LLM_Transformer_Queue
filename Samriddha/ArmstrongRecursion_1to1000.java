import java.util.Scanner;
class ArmstrongRecursion
{
	int x;
	int findArmstrong(int n,int a)
	{
	if(n!=0)
	{
		x=n%10;
		a=a+(x*x*x);
		n/=10 ;
		return findArmstrong(n,a);
	}
	return a;
	}
	public static void main(String[] arg)
	{
	ArmstrongRecursion A=new ArmstrongRecursion();
	int arm;
	System.out.println("Armstrong numbers between 1 to 1000");
	for(int num=1;num<500;num++)
	{
	arm=A.findArmstrong(num,0);
	if(arm==num)
	      System.out.println(num);
	}
	}
}
