/***
* Author - coderrohan14
* Codeforces Round #636 (Div.3)
* Problem link - https://codeforces.com/contest/1343/problem/C
***/
import java.util.*;
import java.math.*;
 
public class test1 { 
 
	public static void main(String[] args){
		 	FastReader sc = new FastReader();
			int t = sc.nextInt();
			StringBuffer ans = new StringBuffer("");
			//sc.nextLine();
			while(t-->0) { 
				int n = sc.nextInt(),k=2;
				long[] arr = new long[n];
				for(int i=0;i<n;i++) {
					arr[i] = sc.nextLong();
				}
				long num = Long.MIN_VALUE,sum=0;
				boolean x = false;
				for(int i=0;i<n;i++) {
					if(i!=n-1&&arr[i]>0&&arr[i+1]>0) {
						num = Math.max(arr[i], num);
					}else if(i!=n-1&&arr[i]>0&&arr[i+1]<0) {
						num = Math.max(arr[i], num);
						sum+=num;
						x= true;
						num = Long.MIN_VALUE;
					}else if(i!=n-1&&arr[i]<0&&arr[i+1]<0) {
						num = Math.max(arr[i], num);
					}else if(i!=n-1&&arr[i]<0&&arr[i+1]>0) {
						num = Math.max(arr[i], num);
						sum+=num;
						x=true;
						num = Long.MIN_VALUE;
					}else if(i==n-1) {
						num = Math.max(arr[i], num);
						sum+=num;
						x=true;
					}
				}
				if(x) {
					ans.append(sum+"\n");
				}else {
					ans.append("-1\n");
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
