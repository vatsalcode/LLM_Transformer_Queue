//Verify the chilren sum property for given binary tree(Function Only)...
//Problem link - https://practice.geeksforgeeks.org/problems/children-sum-parent/0/?track=DSASP-Tree&batchId=155

class Tree
{
    // Return 1 if all the nodes in the tree satisfy the given property. Else return 0
    public static int isSumProperty(Node root)
    {
        // add your code here
        boolean x = childSum(root);
        if(x) return 1;
        return 0;
    }
    static boolean childSum(Node root){
        if(root==null) return true;
        if(root.left==null&&root.right==null) return true;
        int sum=0;
        if(root.left!=null)sum+=root.left.data;
        if(root.right!=null)sum+=root.right.data;
        return (root.data==sum)&&childSum(root.left)&&childSum(root.right);
    }
}
