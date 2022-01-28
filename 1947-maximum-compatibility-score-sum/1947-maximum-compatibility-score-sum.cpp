class Solution {
public:
    int dp[10][256];
    int score(vector<int>s,vector<int>&m)
    {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==m[i])
            {
                ans++;
            }
        }
        return ans;
    }
    int helper(int i,int mask,vector<vector<int>>&s,vector<vector<int>>&m)
    {
        int n=s.size();
        if(i==n)
        {
            return 0;
        }
        if(dp[i][mask]!=-1)
        {
            return dp[i][mask];
        }
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if((mask&(1<<j))==0)
            {
                int n_mask=mask|(1<<j);
                ans=max(ans,score(s[i],m[j])+helper(i+1,n_mask,s,m));
            }
        }
        return dp[i][mask]=ans;
    }
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        memset(dp,-1,sizeof(dp));
        return helper(0,0,students,mentors);
    }
};