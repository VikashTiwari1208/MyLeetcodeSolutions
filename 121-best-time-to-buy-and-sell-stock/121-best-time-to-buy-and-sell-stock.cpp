class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)
        {
            return 0;
        }
        int ans=0;
        int curr_price=prices[n-1];
        for(int i=n-1;i>=0;i--)
        {
            ans=max(ans,curr_price-prices[i]);
            curr_price=max(curr_price,prices[i]);
        }
        return ans;
    }
};