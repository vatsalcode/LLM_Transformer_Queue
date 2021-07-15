bool containsDuplicate(vector<int>& nums) {
        set<long long int>dup;
        for(int i=0;i<nums.size();i++)
        {
            dup.insert(nums[i]);
        }
        if(dup.size()<nums.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
