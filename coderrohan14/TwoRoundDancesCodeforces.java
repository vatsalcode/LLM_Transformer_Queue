/***
* Author - coderrohan14
* Codeforces Round #677(Div-3) - E
* Problem Link - https://codeforces.com/contest/1433/problem/E
***/

//package dataStructures;
 
import java.util.*;
import java.lang.*;
import java.io.*;
public class test1
 {
	public static void main (String[] args) throws IOException
	 {
		FastReader sc = new FastReader();
		long t = sc.nextLong();
		long ans = fact(t)/((t*t)/2);
		System.out.println(ans);
	}
	static long fact(long n) {
		if(n==1) return 1;
		return n*fact(n-1);
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
