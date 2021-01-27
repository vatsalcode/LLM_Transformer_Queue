import java.io.*;
import java.util.*;
class Observations
{
    public static void main(String[] args) 
    {
        Scanner r=new Scanner(System.in);
        int n=r.nextInt();
        while(n!=0)
        {
            int t=r.nextInt();
            String s=r.next();
            int l=s.length();
            int c=0;
            for(int i=0;i<l;i++)
            {
                if(s.charAt(i)=='Y')
                {
                    c=1;
                    System.out.println("NOT INDIAN");
                    break;
                }
                else if(s.charAt(i)=='I')
                {
                    c=2;
                    System.out.println("INDIAN");
                    break;
                }
            }
            if(c==0) System.out.println("NOT SURE");
            n=n-1;
        }
    }
}
====================================================================================================================================================================
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class test2
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    try{
		int n=0,o=0;
		byte a=0;
		char c=' ';
		Scanner r= new Scanner(System.in);
		System.out.println("enter number of people");
		n=r.nextInt();
		for(int i=0;i<n;i++)
		{
		    System.out.println("enter number of observations");
		    o=r.nextInt();
		    for(int j=0;j<o;j++)
		    {
		        System.out.println("enter observation");
		        c=r.next().charAt(0);
		        if(c=='Y'){a=1; break;};
		        if(c=='I'){a=2;break;}
		    }
		    if(a==1)System.out.println("NOT INDIAN");
		    else if (a==2)System.out.println("INDIAN");
		    else System.out.println("NOT SURE");
		    a=0;
		}
	}catch(Exception e){return;}
}
}
