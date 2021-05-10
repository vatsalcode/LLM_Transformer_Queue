//Check if two given binary trees are identical or not(Function Only)...
//Problem link - https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/0/?track=DSASP-Tree&batchId=155

class Tree
{
	boolean isIdentical(Node root1, Node root2)
	{
	    // Code Here
	    ArrayList<Integer> arr1  = inOrder(root1);
	    ArrayList<Integer> arr2  = inOrder(root2);
	    boolean x = true;
	    if(arr1.size()!=arr2.size()) return false;
	    for(int i=0;i<arr2.size();i++){
	       // if(arr1.get(i)!=arr2.get(i)){ 
	       //     x = false;
	       //     break;}
	       System.out.print(arr1.get(i) + " "+arr2.get(i)+(arr1.get(i)==arr2.get(i)) +  " ");
	    }
	    return x;
	}
	 ArrayList<Integer> inOrder(Node root){
	    ArrayList<Integer> arr = new ArrayList<>();
	    inOrderTr(root,arr);
	    return arr;
	}
	 void inOrderTr(Node root,ArrayList<Integer> arr){
	    if(root==null) return;
	    inOrderTr(root.left,arr);
	    arr.add(root.data);
	    inOrderTr(root.right,arr);
	}
}
