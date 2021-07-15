void rotate(vector<int>& nums, int k) {
         vector<int> r = nums;
        int j=0;
        k= k%r.size();
        for(int i=r.size()-k; j<r.size(); i++)
        {
            nums[(j++)] = r[i%r.size()];
        }
        
    }
