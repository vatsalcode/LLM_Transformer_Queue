import java.util.Scanner;
class LS
{
   public static void main(String args[])
   {
      int i,key=9;
      int a[]={1,4,7,9,10};     
      for (i= 0; i < a.length; i++)
      {
         if (a[i] == key) 
         {
           System.out.println(key+" is present at location "+(i+1));
           break;
         }
      }
      if (i == a.length)
        System.out.println(key + " doesn't exist in array.");
   }
}
