import java.util.*;
class EvilNumber
{
    String toBinary(int n)
    {
        int r;
        String s=""; 
        char dig[]={'0','1'}; 
  
        while(n>0)
            {
                r=n%2; 
                s=dig[r]+s; 
                n=n/2;
            }
        return s;
    }
     
    int countOne(String s) 
    {
        int c = 0, l = s.length();
        char ch;
        for(int i=0; i<l; i++)
        {
            ch=s.charAt(i);
            if(ch=='1')
            {
                c++;
            }
        }
        return c;
    }
     
    public static void main(String args[])
    {
        EvilNumber ob = new EvilNumber();
        Scanner sc = new Scanner(System.in);
         
        System.out.print("Enter a positive number : ");
        int n = sc.nextInt();
         
        String bin = ob.toBinary(n);
        System.out.println("Binary Equivalent = "+bin);
         
        int x = ob.countOne(bin);
        System.out.println("Number of Ones = "+x);
         
        if(x%2==0)
            System.out.println(n+" is an Evil Number.");
        else
            System.out.println(n+" is Not an Evil Number.");
    }
}
