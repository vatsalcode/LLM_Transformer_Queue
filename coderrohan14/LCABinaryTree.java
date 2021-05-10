// Lowest Common Ancestor of given two nodes in binary tree(Function Only)...
//Problem link - https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/0/?track=DSASP-Tree&batchId=155

class Tree
{

/* If n1 and n2 are present, return reference
   to LCA. If both are not present, return 
   null,. Else if left subtree contains any 
   of them return pointer to left.*/
	Node lca(Node root, int n1,int n2)
	{   
		// Your code here
		if(root==null) return null;
		if(root.data == n1||root.data==n2) return root;
		Node lca1 = lca(root.left,n1,n2);
		Node lca2 = lca(root.right,n1,n2);
		if(lca1!=null&&lca2!=null) return root;
		else if(lca1!=null) return lca1;
		else return lca2;
	}
}
