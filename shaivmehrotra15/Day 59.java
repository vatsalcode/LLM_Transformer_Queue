import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try {
		    Scanner scn = new Scanner(System.in);
		    int n= scn.nextInt();
		    for(int i=0;i<n;i++){
		        int x=scn.nextInt();
		        int y = scn.nextInt();
		        double num =(x*y);
		        if(x>=1000){
		            num=(double)num - num*10/100;
		        }
		        System.out.printf("%.6f\n",num);
		    }
		} catch(Exception e) {
		}
	}
}
