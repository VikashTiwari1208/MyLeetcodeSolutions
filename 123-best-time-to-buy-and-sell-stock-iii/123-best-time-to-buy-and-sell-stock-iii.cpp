class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
        int K=2;
       vector<vector<int>>dp(n,vector<int>(K+1,0));
        int ans=0;
        for(int k=1;k<=K;k++)
        {
            int temp=dp[0][k-1]-prices[0];
            for(int i=1;i<n;i++)
            {
                    dp[i][k]=dp[i-1][k];
                        dp[i][k]=max(dp[i][k],prices[i]+temp);
                       temp=max(temp,-prices[i]+dp[i][k-1]);                 
                    
             ans=max(ans,dp[i][k]);
            }
        }
        
        return ans;
    }
};