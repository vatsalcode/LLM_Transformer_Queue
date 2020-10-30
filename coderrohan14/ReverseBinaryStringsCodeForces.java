/***
* Author - coderrohan14
* Educational Codeforces Round 97 - B
* Problem link - https://codeforces.com/contest/1437/problem/B
***/

//package dataStructures;
 
import java.util.*;
 
import java.lang.*;
import java.io.*;
public class test2
 {
	public static void main (String[] args) throws IOException
	 {
		 Scanner sc = new Scanner(System.in);
	        int T = sc.nextInt();
	        for (int t = 0; t < T; t++) {
	            sc.nextInt();
	            String s = sc.next();
	            int n = 0;
	            for(int i = 1; i < s.length(); i++) {
	                if(s.charAt(i) == s.charAt(i - 1))
	                    n++;
	            }
	            n++;
	            System.out.println(n / 2);
	        }
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
