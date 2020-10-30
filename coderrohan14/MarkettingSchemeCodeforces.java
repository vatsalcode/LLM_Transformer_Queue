/***
* Author - coderrohan14
* Educational Codeforces Round 97 - A
* Problem link - https://codeforces.com/contest/1437/problem/A
***/

//package dataStructures;
 
import java.util.*;
 
import java.lang.*;
import java.io.*;
public class test2
 {
	public static void main (String[] args) throws IOException
	 {
		FastReader sc = new FastReader();
		int t = sc.nextInt();
		StringBuffer ans = new StringBuffer("");
		while(t-->0) {
			int l=sc.nextInt(),r=sc.nextInt();
			if(l>r/2) {
				ans.append("YES\n");
				continue;
			}
			ans.append("NO\n");
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
