//Given an array of size n, find the maximum sum of any subarray having no consecutive elements....DP Solution(O(n)).


import java.util.*;
import java.lang.*;
import java.io.*;
class test1
 {
	public static void main (String[] args) throws IOException
	 {
		FastReader sc = new FastReader();
		int n =sc.nextInt();
		int[] arr = new int[n],dp = new int[n];
		int max=Integer.MIN_VALUE;
		for(int i=0;i<n;i++)
			arr[i] = sc.nextInt();
		dp[0]=arr[0];
		dp[1]=Math.max(arr[0], arr[1]);
		for(int i=2;i<n;i++) {
			dp[i] = Math.max(dp[i-1], arr[i]+dp[i-2]);
		}
		System.out.println(dp[n-1]);
	}
}
