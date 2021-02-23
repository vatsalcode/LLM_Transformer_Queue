import java.util.*;
class Anagrams
{
    int c = 0;
     
    void input()throws Exception
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a word : ");
        String s = sc.next();
        System.out.println("The Anagrams are : ");
        display("",s);
        System.out.println("Total Number of Anagrams = "+c);
    }
   
    void display(String s1, String s2)
    {
        if(s2.length()<=1)
        {
            c++;
            System.out.println(s1+s2);
        }
        else
        {
            for(int i=0; i<s2.length(); i++)
            {
                String x = s2.substring(i, i+1);
                String y = s2.substring(0, i);
                String z = s2.substring(i+1);
                display(s1+x, y+z);
            }
        }
    }
     
    public static void main(String args[])throws Exception
    {
        Anagrams ob=new Anagrams();
        ob.input();
    }
}
