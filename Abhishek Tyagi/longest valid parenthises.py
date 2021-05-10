
 
class Solution: 
 def longestValidParentheses(self,string):
     n = len(string)

     stack_ = []
     stack_.append(-1)

     result = 0

     for i in range(n):
         if string[i] == '(':
             stack_.append(i)

         else:   

             if len(stack_) != 0:
                stack_.pop()

             if len(stack_) != 0:
                 result = max(result, 
                              i - stack_[len(stack_)-1])

             else:
                 stack_.append(i)

     return result
