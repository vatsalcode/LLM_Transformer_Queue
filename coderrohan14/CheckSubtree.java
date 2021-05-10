//Check if a given tree is a subtree of the another tree...(Function Only)
//Problem link - https://practice.geeksforgeeks.org/problems/check-if-subtree/0/?track=DSASP-Tree&batchId=155

class Tree {
    
    public static boolean isSubtree(Node T, Node S) {
        // add code here.
        if(S==null) return true;
        ArrayList<Integer> in1 = new ArrayList<>();
        ArrayList<Integer> in2 = new ArrayList<>();
        ArrayList<Integer> pre1 = new ArrayList<>();
        ArrayList<Integer> pre2 = new ArrayList<>();
        inOrder(T,in1);
        inOrder(S,in2);
        preOrder(T,pre1);
        preOrder(S,pre2);
        if(pre1.size()<pre2.size()||in1.size()<in2.size()){
            return false;
        }
        if(isSubArray(in1,in2,in1.size(),in2.size())&&isSubArray(pre1,pre2,pre1.size(),pre2.size())){
            return true; 
        }
        return false;
    }
    public static void preOrder(Node root,ArrayList<Integer> arr){
        if(root==null){
            arr.add(-1);
          return;  
        } 
        arr.add(root.data);
        preOrder(root.left,arr);
        preOrder(root.right,arr);
    }
     public static void inOrder(Node root,ArrayList<Integer> arr){
        if(root==null){
            arr.add(-1);
          return;  
        } 
        inOrder(root.left,arr);
        arr.add(root.data);
        inOrder(root.right,arr);
    }
     static boolean isSubArray(ArrayList<Integer> A, ArrayList<Integer> B,  
                                   int n, int m) 
    { 
        int i = 0, j = 0; 
        while (i < n && j < m) 
        { 

            if (A.get(i).equals(B.get(j)))
            { 
      
                i++; 
                j++; 
                if (j == m) 
                    return true; 
            } 
            else
            { 
                i = i - j + 1; 
                j = 0; 
            } 
        } 
        return false; 
    } 
}
