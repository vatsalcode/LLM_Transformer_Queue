void moveZeroes(vector<int>& nums) {
         int n = nums.size();
         int z = 0;
         for (int i = 0; i < n; i++)
         {
             z += (nums[i] == 0);
         }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0) 
            {
                v.push_back(nums[i]);
            }
        }
        while (z--) 
        {
            v.push_back(0);
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = v[i];
        }
    }
