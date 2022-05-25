class Solution {
public:
    int dp[1004][2005];
    int helper(int idx,int cnt,int k,int n,vector<vector<int>>&p)
    {
        if(idx>=n||cnt>=k)
        {
            return 0;
        }
        if(dp[idx][cnt]!=-1)
        {
            return dp[idx][cnt];
        }
        int nottaken=helper(idx+1,cnt,k,n,p);
        int taken=0;
        int sum=0;
        for(int j=0;j<min((int)p[idx].size(),k-cnt);j++)
        {
            sum+=p[idx][j];
            taken=max(taken,sum+helper(idx+1,cnt+j+1,k,n,p));
        }
            return dp[idx][cnt]=max(taken,nottaken);
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
         memset(dp,-1,sizeof(dp));
        return helper(0,0,k,n,piles);
    }
};