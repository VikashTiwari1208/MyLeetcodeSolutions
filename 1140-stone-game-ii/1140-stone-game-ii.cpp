class Solution {
public:
    int dp[105][210];
    int helper(int idx,int m,vector<int>&sum)
    {
        int n=sum.size();
        if(idx==n-1)
        {
            return sum[idx];
        }
        if(idx>=n)
        {
            return 0;
        }
        if(2*m>=sum.size()-idx)
        {
            return sum[idx];
        }
        if(dp[idx][m]!=-1)
        {
            return dp[idx][m];
        }
        int ans=INT_MAX;
        for(int i=1;i<=2*m;i++)
        {
            ans=min(ans,helper(idx+i,max(m,i),sum));
        }
        return dp[idx][m]=sum[idx]-ans;
    
    }
    int stoneGameII(vector<int>& piles) {
        int n=piles.size();
        vector<int>sum(n);
        sum[n-1]=piles[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sum[i]=sum[i+1]+piles[i];
        }
        memset(dp,-1,sizeof(dp));
        return helper(0,1,sum);
    }
};