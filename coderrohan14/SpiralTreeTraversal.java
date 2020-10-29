/***
* Author - coderrohan14
* Spiral line by line traversal in Binary Tree.
***/

import java.util.*;
import java.lang.*;
import java.io.*;
public class test2
 {
	public static void main (String[] args) throws IOException
	 {
		TreeNode x = new TreeNode(1);
		x.left = new TreeNode(2);
		x.right = new TreeNode(3);
		x.left.left = new TreeNode(4);
		x.left.right = new TreeNode(5);
		x.right.left = new TreeNode(6);
		x.right.right = new TreeNode(7);
		levelOrder(x);
	}
	static void levelOrder(TreeNode root) {
		if(root==null) return;
		Queue<TreeNode> q = new LinkedList<TreeNode>();
		Stack<TreeNode> st = new Stack<TreeNode>();
		boolean reverse = false;
		q.add(root);
		while(!q.isEmpty()) {
			int count=q.size();
			for(int i=0;i<count;i++) {
				TreeNode temp = q.poll();
				if(reverse) {
					st.push(temp);
				}else {
				System.out.print(temp.data + " ");
				}
				if(temp.left!=null) q.add(temp.left);
				if(temp.right!=null) q.add(temp.right);
			}
			if(reverse) {
				while(!st.isEmpty()) {
					System.out.print(st.pop().data + " ");
				}
			}
			reverse = !reverse;
			System.out.println();
		}
	}
	static class TreeNode{
		TreeNode left,right;
		int data;
		TreeNode(int data){
			this.data = data;
		}
	}
	  static class FastReader         //Input Class
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
