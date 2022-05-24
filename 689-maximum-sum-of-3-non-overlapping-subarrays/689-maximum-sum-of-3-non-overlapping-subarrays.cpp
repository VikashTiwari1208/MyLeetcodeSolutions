class Solution {
public:
    int dp[20005][4];
    int helper(vector<int>&sum,int i,int cnt,int k,int m)
    {
        int n=sum.size();
        if(i+k>=n||cnt>=m)
        {
            return 0;
        }
        if(dp[i][cnt]!=-1)
        {
            return dp[i][cnt];
        }
        int nottaken=helper(sum,i+1,cnt,k,m);
        
           int taken=sum[i+k]-sum[i]+helper(sum,i+k,cnt+1,k,m);
       
        return dp[i][cnt]=max(taken,nottaken);
    }
    
    void solve(int i,int cnt,vector<int>&sum,vector<int>&res,int k,int m)
    {
        int n=sum.size();
        if(i+k>=n||cnt>=m)
        {
            return ;
        }
        int nottaken=helper(sum,i+1,cnt,k,m);
        
           int taken=sum[i+k]-sum[i]+helper(sum,i+k,cnt+1,k,m);
        if(taken>=nottaken)
        {
            res.push_back(i);
            return solve(i+k,cnt+1,sum,res,k,m);
        }
        return solve(i+1,cnt,sum,res,k,m);
        
    }
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        vector<int> sum(n+1);
        sum[0]=0;
        for(int i=1;i<=n;i++)
        {
            sum[i]=sum[i-1]+nums[i-1];
        }
        helper(sum,0,0,k,3);
        vector<int>ans;
        solve(0,0,sum,ans,k,3);
        return ans;
    }
};