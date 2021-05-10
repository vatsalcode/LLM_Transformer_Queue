class Node:

    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

def make_tree() -> Node:
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    return root

def zigzag_iterative(root: Node):
   
    if root == None: 
        return 
  
    s1 = [] 
    s2 = []  
  
    s1.append(root)  
  
    while not len(s1) == 0 or not len(s2) == 0: 
          
        while not len(s1) == 0: 
            temp = s1[-1]  
            s1.pop()  
            print(temp.data, end = " ")  
  
            if temp.left: 
                s2.append(temp.left)
            if temp.right:  
                s2.append(temp.right)
  
        while not len(s2) == 0: 
            temp = s2[-1]  
            s2.pop()  
            print(temp.data, end = " ")  
  
            if temp.right:  
                s1.append(temp.right)
            if temp.left: 
                s1.append(temp.left)  

def main():  
   
    root = make_tree()
    print("\nZigzag order traversal(iterative) is: ")
    zigzag_iterative(root)
    print()


if __name__ == "__main__":
    import doctest

    doctest.testmod()
    main()
    
