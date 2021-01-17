// Find the maximum width of a given binary tree(Function Only)....
//Problem link - https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/0/?track=DSASP-Tree&batchId=155

class Tree
{
    // /* Function to get the maximum width of a binary tree*/
    int getMaxWidth(Node root)
    {
        // Your code here
        if(root==null) return 0;
        int max = Integer.MIN_VALUE;
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int size = q.size();
            max = Math.max(max,size);
            for(int i=0;i<size;i++){
                Node curr = q.poll();
                if(curr.left!=null) q.add(curr.left);
                if(curr.right!=null) q.add(curr.right);
            }
        }
        return max;
    }		
}
