class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
        int pre[n];
        pre[0]=0;
        int min_buy=prices[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=max(pre[i-1],prices[i]-min_buy);
            min_buy=min(min_buy,prices[i]);
        }
        int suff[n];
        suff[n-1]=0;
        int max_sell=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=max(suff[i+1],-prices[i]+max_sell);
            max_sell=max(max_sell,prices[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,pre[i]+suff[i]);
        }
        return ans;
    }
};