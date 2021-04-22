class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        Stack=[]                                     
        pushed=deque(pushed)                        
        popped=deque(popped)                         
        while(len(pushed)):
            
            if len(Stack)==0:
                Stack.append(pushed.popleft())
            else:
                push = pushed.popleft()            
                pop  = popped.popleft()
                if Stack[-1]==pop:
                    Stack.pop()
                    pushed.appendleft(push)
                else:
                    Stack.append(push)
                    popped.appendleft(pop)
        
        while(len(Stack)):                           
            pop=popped.popleft()
            top=Stack.pop()
            if pop!=top:
                return False
        return True                           
      
