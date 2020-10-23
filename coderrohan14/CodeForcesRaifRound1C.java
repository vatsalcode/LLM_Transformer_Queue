/***
* Author - coderrohan14
* Codeforces Raif Round 1 - C
* Problem link - https://codeforces.com/contest/1428/problem/C
***/

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
			String s = sc.nextLine();
			int size = s.length(),finalLen = size,i=0,prev=-1;
			if(size==1) {
				ans.append(1 + "\n");
				continue;
			}
			Stack<Character> stack = new Stack<>();
			while(i<size) {
				if(!stack.isEmpty()) {
					char x = stack.peek();
					if((x=='A'||x=='B')&&s.charAt(i)=='B') {
						stack.pop();
						i++;
						continue;
					}
				}
				if(i!=size-1&&(s.charAt(i)=='A'||s.charAt(i)=='B')&&s.charAt(i+1)=='B') {
					i+=2;
					continue;
				}
				stack.push(s.charAt(i));
				i++;
			}
			ans.append(stack.size() + "\n");
		}
		System.out.println(ans);
	}
	static void printSub(String s,String current ,int ind) {
		if(ind == s.length()) {
			if(current!="")
			System.out.println(current);
			return;
		}
		printSub(s,current,ind+1);
		printSub(s,current+s.charAt(ind),ind+1);
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
