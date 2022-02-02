class Solution {
public:
    vector<vector<int>>dp;
    int helper(int idx,int mask,vector<int>&nums)
    {
        int n=nums.size();
        if(idx>n/2)
        {
            return 0;
        }
        if(dp[idx][mask]>-1)
        {
            return dp[idx][mask];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((mask&(1<<i))==0&&(mask&(1<<j))==0)
                {
                    int temp=idx*__gcd(nums[i],nums[j]);
                    int n_mask=mask|(1<<i);
                    n_mask|=(1<<j);
                    ans=max(ans,temp+helper(idx+1,n_mask,nums));
                }
            }
        }
        
        return dp[idx][mask]=ans;
    }
    int maxScore(vector<int>& nums) {
        int n=nums.size();
        dp.resize((n/2)+1,vector<int>((1<<n),-1));
         
        return helper(1,0,nums);
    }
};