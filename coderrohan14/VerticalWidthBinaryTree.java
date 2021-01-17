// Vertical width of a binary tree..(Function only)
//Problem link - https://practice.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/0/?track=DSASP-Tree&batchId=155
class Tree
{
    public static int verticalWidth(Node root)
	{
	    // code here.
	    HashSet<Integer> ans = new HashSet<>();
	    vertWid(root,ans,0);
	    int res = ans.size();
	    return res;
	}
	public static void vertWid(Node root,HashSet<Integer> ans,int res){
	    if(root==null) return;
	    if(ans.isEmpty()){ 
	        ans.add(res);
	    }
	    if(!ans.contains(res)){
	        ans.add(res);
	    }
	    vertWid(root.left,ans,res-1);
	    vertWid(root.right,ans,res+1);
	}
}
