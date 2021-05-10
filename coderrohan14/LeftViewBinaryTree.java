// Print the left view of a binary tree(Function Only)....
// Problem link - https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/0/?track=DSASP-Tree&batchId=155

class Tree
{
    ArrayList<Integer> leftView(Node root)
    {
      // Your code here
      ArrayList<Integer> arr = new ArrayList<>();
      if(root==null) return arr;
      Queue<Node> q = new LinkedList<>();
      q.add(root);
      while(!q.isEmpty()){
          int size = q.size();
          for(int i=0;i<size;i++){
              Node curr = q.poll();
              if(i==0){
                  arr.add(curr.data);
              }
              if(curr.left!=null) q.add(curr.left);
              if(curr.right!=null) q.add(curr.right);
          }
      }
      return arr;
    }
}
