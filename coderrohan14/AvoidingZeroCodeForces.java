/***
* Author - coderrohan14
* Codeforces Global Round 11
* Problem link - https://codeforces.com/contest/1427/problem/A
***/

import java.util.*;
import java.math.*;
 
import java.io.*; 
 
 public class test1 { 
 
	public static void main(String[] args){
		 	FastReader sc = new FastReader();
			int t = sc.nextInt();
			StringBuffer ans = new StringBuffer("");
			//sc.nextLine();
			while(t-->0) { 
				int n = sc.nextInt();
				int[] arr = new int[n];
				int sum=0,sum1=0,sum2=0;
				for(int i=0;i<n;i++) {
					arr[i] = sc.nextInt();
					sum+=arr[i];
					if(arr[i]>=0) {
						sum1+=arr[i];
						}else {
							sum2+=arr[i];
						}
				}
				Arrays.sort(arr);
				if(sum==0) {
					ans.append("NO\n");
					continue;
				}else {
					if(Math.abs(sum1)>Math.abs(sum2)) {
						ans.append("YES\n");
						if(arr[0]>=0) {
							for(int i=n-1;i>=0;i--) {
								ans.append(arr[i] + " ");
							}
							ans.append("\n");
							continue;
						}
						int i=n-1;
						while(true) {
							if(arr[i]>=0) {
								ans.append(arr[i] +" ");
							}else if(arr[i]<0) {
								break;
							}
							i--;
						}
						for(int x=i;x>=0;x--) {
							if(x==0) {
								ans.append(arr[x]);
								continue;
							}
							ans.append(arr[x] + " ");
						}
						ans.append("\n");
					}else {
						ans.append("YES\n");
						for(int i=0;i<n;i++) {
							if(i==n-1) {
								ans.append(arr[i]);
								continue;
							}
							ans.append(arr[i] + " ");
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
