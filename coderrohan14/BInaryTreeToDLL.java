//Convert binary tree to doubly linked list (Inorder traversal)...
//Problem link - https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/0/?track=DSASP-Tree&batchId=155
// Function Only..

class GfG
{
    Node prev = null;
    Node bToDLL(Node root)
    {
	//  Your code here	
	if(root==null) return root;
	Node head = bToDLL(root.left);
	if(prev==null){
	    head = root;
	}
	else{
	    root.left = prev;
	    prev.right = root;
	}
	prev=root;
	bToDLL(root.right);
	return head;
    }
}
