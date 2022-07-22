class Solution {
public:
    int dp[52][52];
    int helper(vector<int>&val,int i,int j)
    {
        if(j-i+1<=2)
        {
            return 0;
        }
        if(j-i+1==3)
        {
            return val[i]*val[i+1]*val[i+2];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int idx=i+1;idx<j;idx++)
        {
            ans=min(ans,helper(val,i,idx)+helper(val,idx,j)+val[i]*val[j]*val[idx]);
        }
        return dp[i][j]=ans;
    }
    int minScoreTriangulation(vector<int>& val) {
        memset(dp,-1,sizeof(dp));
        int n=val.size();
        return helper(val,0,n-1);
    }
};