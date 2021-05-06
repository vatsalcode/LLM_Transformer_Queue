java.util.Scanner;
class Power
{
public static void main(String args[])
{
   long n,p,r=1;
 
   n=Long.parseLong(args[0]);
 
   p=Long.parseLong(args[1]);
 
   if(n>=0&&p==0)
   {
     r =1;
   }
   else if(n==0&&p>=1)
   {
    r=0;
   }
    else
    {
       for(int i=1;i<=p;i++)
       {
            r=r *n;
        }
     }
 
    System.out.println(n+"^"+p+"="+r);
}
}
