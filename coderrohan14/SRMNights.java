/***
* Author - coderrohan14
* SRM ICPC Selection contest problem....
* problem link - https://www.codechef.com/SRMI2020/problems/SSN88/
***/

import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		FastReader sc = new FastReader();
			int t = sc.nextInt();
			StringBuffer ans = new StringBuffer("");
			//sc.nextLine();
			while(t-->0) { 
				int n =sc.nextInt(),sum=0;
				//sc.nextLine();
				String s = sc.nextLine();
				char[] arr = s.toCharArray();
				for(int i=0;i<n;i++) {
					if(i==0) {
						if(arr[i]=='0'&&arr[i+1]=='0') {
							arr[i] = '1';
							sum++;
						}
						continue;
					}
					if(i==n-1) {
						if(arr[i]=='0'&&arr[i-1]=='0') {
							arr[i] = '1';
							sum++;
						}
						continue;
					}
						if(arr[i]=='0'&&arr[i-1]=='0'&&arr[i+1]=='0') {
							arr[i] = '1';
							sum++;
						}
				}
				ans.append(sum + "\n");
			}

		 	System.out.println(ans);
	}
	static class FastReader               //*********Input Class*********
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
