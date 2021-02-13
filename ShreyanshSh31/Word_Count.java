import java.util.*;
class NoOfWords
{
  public static void main()
  {
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter a string");
      String s=sc.nextLine();
      int l=s.length();
      s=" "+s;
      char ch,ab;
      int c=0;
      for(int i=0;i<l;i++)
      {
          ch=s.charAt(i);
          ab=s.charAt(i+1);
          if(ch==' '&&ab!=' ')
          c++;
        }
      System.out.println("Number of words="+c);
    }
}
