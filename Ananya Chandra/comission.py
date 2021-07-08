// to calculate the comission of an employee according to his salary
import java.io.*;
class salesprice
{
public static void main()throws IOException
{
double sales,comm;
BufferedReader aa=new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter sales");
sales=Double.parseDouble(aa.readLine());//reading sales from the keyboard
if(sales>=100000)
comm=0.25*sales;
else
if(sales>=80000)
comm=0.225*sales;
else
if(sales>=60000)
comm=0.2*sales;
else
if(sales>=40000)
comm=0.15*sales;
else
comm=0.125*sales;
System.out.println("Commission of the employee="+comm);
}
}
