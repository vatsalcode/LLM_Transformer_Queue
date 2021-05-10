if __name__ == '__main__':
    N = int(input())
    if N%2==0:
        if N>20 :
            print("Not Weird")
        elif N in range(2,5):
            print("Not Weird")    
        else:
            print("Weird")
    else:
        print("Weird")
                        
     
