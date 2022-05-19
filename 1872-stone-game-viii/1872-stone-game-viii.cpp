class Solution {
public:
  
    int stoneGameVIII(vector<int>& stones) {
        //dp.resize(100005,vector<int>(2,INT_MIN));
        int n=stones.size();
        if(n==2)
        {
            return stones[0]+stones[1];
        }
        for(int i=1;i<n;i++)
        {
            stones[i]+=stones[i-1];
        }
        int dp[n];
        dp[n-1]=stones[n-1];
        int ans=dp[n-1];
        for(int i=n-2;i>=0;i--)
        {
            dp[i]=max(dp[i+1],stones[i]-dp[i+1]);
          if(i>0)
          {
                ans=max(ans,dp[i]);
          }
        }
           return ans;
    }
};