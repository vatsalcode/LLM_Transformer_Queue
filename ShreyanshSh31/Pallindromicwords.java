import java.util.*;
class Pallindromicwords
{
  public static void main()
  {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter a sentence");
      String s=sc.nextLine();
      s=s+" ";
      int l=s.length();
      String w,rev;
      w="";
      rev="";
      for(int i=0;i<l;i++)
      {
          char ch=s.charAt(i);
          if(ch!=' ')
          {
              w=ch+w;
            }
          else
          {
              rev=rev+" "+w;
              w="";
            }
        }
      System.out.println("Reverse = "+rev);
    }
}
