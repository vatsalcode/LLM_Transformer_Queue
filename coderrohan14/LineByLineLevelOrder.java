//Line bt line level order traversal of binary tree(Function only)...
//Problem link - https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/0/?track=DSASP-Tree&batchId=155

class Level_Order_Traverse
{
    static ArrayList<ArrayList<Integer>> levelOrder(Node node) 
    {
        // Your code here
        ArrayList<ArrayList<Integer>> arr = new ArrayList<>();
        if(node==null) return arr;
        Queue<Node> q = new LinkedList<Node>();
        q.add(node);
        while(!q.isEmpty()){
            ArrayList<Integer> arr1 = new ArrayList<Integer>();
            int size = q.size();
            for(int i=0;i<size;i++){
                Node curr = q.poll();
                arr1.add(curr.data);
                if(curr.left!=null) q.add(curr.left);
                if(curr.right!=null) q.add(curr.right);
            }
            arr.add(arr1);
        }
        return arr;
    }
}
