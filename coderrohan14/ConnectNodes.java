// Given a binary tree, connect all the nodes at the same level using the given nextRight Node,in place.(Function Only)....
// Problem link - https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/0/?track=DSASP-Tree&batchId=155

class Tree
{
    /*
    Node class is Defined as follows:
    class Node{
        int data;
        Node left;
        Node right;
        Node nextRight;
        Node(int data){
            this.data = data;
            left=null;
            right=null;
            nextRight = null;
        }
    }
    */
    public static void connect(Node root)
        {
            // code here.
            if(root==null) return;
            Queue<Node> q = new LinkedList<>();
            q.add(root);
            while(!q.isEmpty()){
                int size = q.size();
                Node prev = null;
                for(int i=0;i<size;i++){
                    Node curr = q.poll();
                    if(i==size-1){
                        if(prev!=null) prev.nextRight = curr;
                        curr.nextRight = null;
                    }
                    if(i>0){
                        prev.nextRight = curr;
                    }
                    prev = curr;
                    if(curr.left!=null) q.add(curr.left);
                    if(curr.right!=null) q.add(curr.right);
                }
            }
        }
}
