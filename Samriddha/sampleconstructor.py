class sample: 
  
    def __init__(self, *args): 
  
        if len(args) > 1: 
            self.ans = 0
            for i in args: 
                self.ans += i 
  
        elif isinstance(args[0], int): 
            self.ans = args[0]*args[0] 
  
        elif isinstance(args[0], str): 
            self.ans = "Hello! "+args[0]+"."
  
  
s1 = sample(4, 5, 6, 7, 8) 
print("Sum of list :", s1.ans) 
  
s2 = sample(10) 
print("Square of int :", s2.ans) 
  
s3 = sample("Test Program by Samriddha") 
print("String :", s3.ans)
