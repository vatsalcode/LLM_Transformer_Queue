/***
* Author - coderrohan14
* Codeforces Round #251(Div-2) - D
* Problem link - https://codeforces.com/contest/439/problem/D
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
		int n=sc.nextInt(),m=sc.nextInt();
		long res=0;
		ArrayList<Long> arr1 = new ArrayList<>(),arr2 = new ArrayList<>();
		for(int i=0;i<n;i++){
			long temp=sc.nextLong();
			arr1.add(temp);
		}
		for(int i=0;i<m;i++){
			long temp=sc.nextLong();
			arr2.add(temp);
		}
		Collections.sort(arr1);
		Collections.sort(arr2);
		Collections.reverse(arr2);
		int i=0;
		while(i<n&&i<m) {
			if(arr1.get(i)<arr2.get(i)) {
				res+=arr2.get(i)-arr1.get(i);
			}
			i++;
		}
		System.out.println(res);
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
