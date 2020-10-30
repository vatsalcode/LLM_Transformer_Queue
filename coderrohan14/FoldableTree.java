// Given a binary tree, check whether it is a foldable tree or not(Function Only)...
// Problem link - https://practice.geeksforgeeks.org/problems/foldable-binary-tree/0/?track=DSASP-Tree&batchId=155

class Tree {
    boolean IsFoldable(Node root) 
	{ 
		// your code 
		if(root==null) return true;
		mirror(root.left);
		boolean x = strSame(root.left,root.right);
		mirror(root.left);
		return x;
	}
	boolean strSame(Node root1,Node root2){
	    if((root1==null&&root2!=null)||(root1!=null&&root2==null)) return false;
	    if(root1==null&&root2==null) return true;
	    ArrayList<Integer> arr1=new ArrayList<>(),arr2=new ArrayList<>();
	    preOrder(root1,arr1);
	    preOrder(root2,arr2);
	    boolean x = true;
	    if(arr1.size()!=arr2.size()){
	        return false;
	    }
	    for(int i=0;i<arr1.size();i++){
	        if(!(arr1.get(i).equals(arr2.get(i)))){
	            return false;
	        }
	    }
	    return x;
	}
	void preOrder(Node root,ArrayList<Integer> arr){
	    if(root==null) return;
	    if(root.left!=null) {arr.add(-1);preOrder(root.left,arr);}
	    if(root.right!=null) {arr.add(1);preOrder(root.right,arr);}
	}
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
