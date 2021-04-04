import java.util.Scanner;
class Depreciation
{
public static void main(String arg[])
{
long amount,deppercent,year,afterdep,temp;
Scanner sc=new Scanner(System.in);
System.out.println("enter amount");
amount=sc.nextLong();
System.out.println("enter Depreciation percentage");
deppercent=sc.nextLong();
System.out.println("enter  number of years");
year=sc.nextLong();
temp=amount;
for(int i=0;i<year;i++)
temp=((100-deppercent)*temp)/100;
System.out.println("after depreciation = "+temp);
 
 
}
}
