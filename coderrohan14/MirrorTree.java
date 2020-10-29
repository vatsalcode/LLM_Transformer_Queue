// Given a binary tree, convert it into its mirror tree(function Only)...
//Problem link - https://practice.geeksforgeeks.org/problems/mirror-tree/0/?track=DSASP-Tree&batchId=155

class Tree
{
    void mirror(Node root)
    {
	    // Your code here
	    if (root == null) 
            return;
    else
    {
        Node temp;
         
        /* Recur for subtrees */
        mirror(root.left);
        mirror(root.right);
     
        /* swap the pointers in this node */
        temp = root.left;
        root.left = root.right;
        root.right = temp;
    }
    }
}
