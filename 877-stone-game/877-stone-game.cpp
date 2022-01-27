class Solution {
public:
    int dp[501][501];
    int helper(int l,int r,vector<int>&stones)
    {
        if(l==r-1)
        {
            return max(stones[l],stones[r]);
        }
        if(dp[l][r]!=-1)
        {
            return dp[l][r];
        }
        int ans=0;
        int left=stones[l]+min(helper(l+2,r,stones),helper(l+1,r-1,stones));
        int right=stones[r]+min(helper(l,r-2,stones),helper(l+1,r-1,stones));
        ans=max(left,right);
        return dp[l][r]=ans; 
    }
    bool stoneGame(vector<int>& piles) {
        int sum=0;
        for(auto x:piles)
        {
            sum+=x;
        }
        memset(dp,-1,sizeof(dp));
        int n=piles.size();
        return helper(0,n-1,piles);
    }
};