/***
* Author - coderrohan14
* Codeforces Round #677 Problem D
* Problem link - https://codeforces.com/contest/1433/problem/D
***/

import java.util.*;
import java.lang.*;
import java.io.*;
public class test2
 {
	static class Pair<T1,T2>{
		T1 x;
		T2 y;
		Pair(T1 x,T2 y) {
			this.x = x;
			this.y = y;
		}
	}
	
	public static void main (String[] args) throws IOException
	 {
		FastReader sc = new FastReader();
		int t = sc.nextInt();
		StringBuffer ans = new StringBuffer("");
		while(t-->0) {
			int n = sc.nextInt(),ind=-1;
			int[] arr = new int[n];
			ArrayList<Pair<Integer,Integer>> arr2 = new ArrayList<>();
			for(int i=0;i<n;i++) {
				arr[i] = sc.nextInt();
			}
			for(int i=1;i<n;i++) {
				if(arr[i]!=arr[0]) {
					arr2.add(new Pair(1,i+1));
					ind = i;
				}
			}
			if(ind==-1) {
				ans.append("NO\n");
				continue;
			}
			for(int i=1;i<n;i++) {
				if(arr[i]==arr[0]) {
					arr2.add(new Pair(ind+1,i+1));
				}
			}
			ans.append("YES\n");
			for(Pair<Integer,Integer>e:arr2) {
				ans.append(e.x + " " + e.y + "\n");
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
