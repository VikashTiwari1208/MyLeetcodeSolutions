class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        int dp[n];
        // max profit till i;
        dp[0]=nums[0];       
        dp[1]=max(nums[0],nums[1]);
        int ans=max(dp[0],dp[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};