/*** 
* Author - coderrohan14
* Codeforces Round #678(Div-2) - B
* Problem link - https://codeforces.com/contest/1436/problem/B
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
		int t = sc.nextInt(),size=100000+1;
		boolean[] check = new boolean[size];
		Arrays.fill(check, true);
		check[0] = false;
		check[1] = false;
		for(int i=2;i*i<size;i++) {
			for(int j = 2;(i*j)<size;j++)
				check[i*j] = false;
		}
		StringBuffer ans = new StringBuffer("");
		while(t-->0) {
			int n =sc.nextInt();
			if(check[n]) {
				for(int i=0;i<n;i++) {
					for(int j=0;j<n;j++) {
						if(i==0||j==0||i==n-1||j==n-1) {
							ans.append("1 ");
						}else {
							ans.append("0 ");
						}
					}
					ans.append("\n");
				}
			}else {
				int x = 4;
				while(true) {
					if(!check[x]&&check[x*(n-1)+1]) {
						break;
					}
					x++;
				}
				for(int i=0;i<n;i++) {
					for(int j=0;j<n;j++) {
						if(i==j) {
							ans.append("1 ");
						}else {
							ans.append(x + " ");
						}
					}
					ans.append("\n");
				}
			}
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
