class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1=0, num2=0;
        ListNode *temp1 = l1, *temp2 = l2, *out = NULL, *tempout = NULL;
        int carry=0;
        
        while(temp1!=NULL || temp2!=NULL || carry){
            int ad = 0;
            if(temp1!=NULL){
                ad += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2!=NULL){
                ad += temp2->val;
                temp2 = temp2->next;
            }
            ad += carry;
            int dig = ad%10;
            carry = ad/10;
             
            if(out==NULL){
                out = new ListNode(dig);
                tempout = out;
            }
            else{
               tempout->next =  new ListNode(dig);
                tempout = tempout->next;
            } 
        }
        return out;
    }
};
