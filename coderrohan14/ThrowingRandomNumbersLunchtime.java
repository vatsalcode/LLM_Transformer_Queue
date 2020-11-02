/***
* Author - coderrohan14
* CodeChef Lunchtime 2020
* Problem Link - https://www.codechef.com/LTIME89B/problems/SSO 
***/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws IOException
	 {
		FastReader sc = new FastReader();
		int t = sc.nextInt();
		StringBuffer ans = new StringBuffer("");
		while(t-->0) {
				int n = sc.nextInt();
				long res = 0,sum=0;
				for(int i=0;i<n;i++) {
					long temp = sc.nextLong();
					sum+=temp;
					res = res|temp;
					res = res|sum;
				}
				res = res|sum;
				ans.append(res + "\n");
		}
		System.out.println(ans);
	}
	
	  static class FastReader 
	    { 
	        BufferedReader br; 
	        StringTokenizer st; 
	  
	        public FastReader() 
	        { 
	            br = new BufferedReader(new
	                     InputStreamReader(System.in)); 
	        } 
	  
	        String next() 
	        { 
	            while (st == null || !st.hasMoreElements()) 
	            { 
	                try
	                { 
	                    st = new StringTokenizer(br.readLine()); 
	                } 
	                catch (IOException  e) 
	                { 
	                    e.printStackTrace(); 
	                } 
	            } 
	            return st.nextToken(); 
	        } 
	  
	        int nextInt() 
	        { 
	            return Integer.parseInt(next()); 
	        } 
	  
	        long nextLong() 
	        { 
	            return Long.parseLong(next()); 
	        } 
	  
	        double nextDouble() 
	        { 
	            return Double.parseDouble(next()); 
	        } 
	  
	        String nextLine() 
	        { 
	            String str = ""; 
	            try
	            { 
	                str = br.readLine(); 
	            } 
	            catch (IOException e) 
	            { 
	                e.printStackTrace(); 
	            } 
	            return str; 
	        } 
	    } 
}
