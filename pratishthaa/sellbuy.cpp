int maxProfit(vector<int>& prices) {
         int n=0;
        int s=0;
        for(int i=1;i<prices.size();i++)
        {
            if((prices[i]-prices[i-1])>=0)
            {
                n=prices[i]-prices[i-1];
            }
            else
            {
                n=0;
            }
            s=s+n;
        }
        return s;
    }
