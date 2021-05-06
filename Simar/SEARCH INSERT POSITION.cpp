class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i,pos;
            for(i=0;i<n;i++)
            {
                if(nums[i]==target)
                {
                  pos=i;
                 break;
                }
                else 
                {
                    if(target<nums[i])
                    {pos=i;break;}                }
            }
        return pos;
        
    }
};
