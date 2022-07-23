class Solution {
public:
    int dp[72][5000];
    //int ans=50000;
    int helper(vector<vector<int>>&mat,int idx,int target,int sum)
    {
        int n=mat.size();
        if(idx>=n)
        {
          return abs(sum-target);
        }
        if(dp[idx][sum]!=-1)
        {
            return dp[idx][sum];
        }
        int m=mat[0].size();
        int ans=50000;
        for(int i=0;i<m;i++)
        {
            ans=min(ans,helper(mat,idx+1,target,sum+mat[idx][i]));
            if(ans==0)
            {
                break;
            }
        }
        return dp[idx][sum]=ans;
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        memset(dp,-1,sizeof(dp));
       return helper(mat,0,target,0);
    }
};