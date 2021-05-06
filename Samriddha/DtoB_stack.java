import java.util.*;
class DtoB
{
  public static void main(String[] arg) 
  { 
    Scanner sc= new Scanner(System.in); 
    Stack<Integer> s= new Stack<Integer>();   // Create Stack object
    System.out.println("Enter decimal number: ");  
    int n = sc.nextInt();
    while(n != 0)
    {
      int d = n % 2;
      s.push(d);
      n /= 2;
    } 
    System.out.print("Binary representation is : ");
    while (!(s.isEmpty() ))
    {
      System.out.print(s.pop());
    }
  }
}
