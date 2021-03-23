def pattern(n):
     
  
    l = 2*n - 2
 
    for i in range(0, n):
     
      
        for j in range(0, l):
            print(end=" ")
     
      
        l= l- 2
     
        
        for j in range(0, i+1):
         
          
            print("^ ", end="")
     
        print("\r")
 
n = 4
pattern(n)
