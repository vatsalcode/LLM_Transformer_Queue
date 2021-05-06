import java.util.*;
class ReverseWord
{
  public static void main()
  {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter a string");
      String s=sc.nextLine();
      s=s+" ";
      int l=s.length();
      char ch;
      String w="",rev="";
      for(int i=0;i<l;i++)
      {
          ch=s.charAt(i);
          if(ch!=' ')
          w=w+ch;
          else
          {
              rev=w+" "+rev;
              w="";
            }           
        }
      System.out.println("Reverse of sentence: "+rev); 
    }
}
