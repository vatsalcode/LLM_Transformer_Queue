//number of words in sentence
import java.util.*;
class wordnum
{
public static void main()
{
 Scanner sc=new Scanner(System.in);
System.out.println("Enter a sentence");   
String a=sc.nextLine(); 
System.out.println("The string is -"+a);
int z=a.length(),y,x=0;
for(y=0;y<z;y++)
{
if(a.charAt(y)==' ')
x=x+1;
}
System.out.println("Number of words in string ="+(x+1));
}
}
